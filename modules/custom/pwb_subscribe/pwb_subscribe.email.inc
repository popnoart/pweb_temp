<?php

/**
 * @since 01 Aug 2012
 * @author Pavlin
 *
 * File to hold all code related only to email subscriptions
 */


/**
 * Load all subscriptions of given type
 * or All of them
 */
function pwb_subscribe_load_subscriptions($type = PWB_SUBSCRIBE_TYPE_UNKNOWN, $token = Null) {
  $query = db_select('pwb_subscribe', 'pwb_s')
    ->fields('pwb_s');
  if ($type) {
    $query->condition('subscription_type', $type, '=');
  }

  if ($token) {
    $query->condition('token', $token, '=');
  }

  $res = $query->execute();

  $results = array();
  while($result = $res->fetch()) {
    $results[$result->email][$result->subscription_type][] = $result;
  }

  return $results;
}


/**
 *  Save the subscription to the DB
 */
function pwb_subscribe_save_subscription( $subscription_type, $form_values, $search) {

  $record = new stdClass();
  $record->email = $form_values['email'];
  $record->subscription_uri = $form_values['subscription_uri'];
  $record->search_params = json_encode($search);
  $record->subscription_type = $subscription_type;
  $record->created = time();


  $primary_keys = array();

  $result = db_select('pwb_subscribe', 'pwb_s')
    ->fields('pwb_s', array('id'))
    ->condition('email', $record->email, '=')
    ->condition('subscription_uri', $record->subscription_uri, '=')
    ->execute()
    ->fetch();


  if(empty($result)) {
    // We don't have subscription for this email + uri so we create it
    $res = db_select('pwb_subscribe', 'pwb_s')
      ->fields('pwb_s', array('token'))
      ->condition('email', $record->email, '=')
      ->execute()
      ->fetch();

    if(!$res) {
      // We don't have record for this user so we generate token
      // and write his first record

      $token = uniqid(mt_rand(), TRUE);
      $record->token = $token;
    } else {
      $record->token = $res->token;
    }
    drupal_write_record('pwb_subscribe', $record, $primary_keys);
  }
}


function pwb_subscribe_remove_subscription($subscription_id) {
  $res = db_delete('pwb_subscribe')
    ->condition('id', $subscription_id)
    ->execute();

  return $res;
}


function pwb_subscribe_remove_subscription_by_email(Array $form_values) {
  $result = db_delete('pwb_subscribe')
    ->condition('email', $form_values['email'], '=')
    ->condition('subscription_uri', $form_values['subscription_uri'], '=')
    ->execute();

  return $result;
}


/**
 * Form listing all email subscription with the posibility to unsubscribe
 */
function pwb_subscribe_list_form($form, &$form_state, $list) {
  $form['pwb_subscribe_fieldset'] = array(
    '#type' => 'fieldset',
  );

  $form['pwb_subscribe_fieldset']['pwb_subscribe_list_items'] = array(
    '#type'   => 'checkboxes',
    '#title'  => 'Subscriptions: ',
    '#options'  => $list,
  );

  $form['pwb_subscribe_list_submit'] = array(
    '#type' => 'submit',
    '#value'  => t('Unsubscribe'),
    '#submit' => array('pwb_subscribe_list_form_submit'),
  );

  return $form;
}


/**
 *  Submit for pwb_subscribe_list_form
 */
function pwb_subscribe_list_form_submit($form, &$form_state) {
  foreach ($form_state['values']['pwb_subscribe_list_items'] as $subscription_id) {
    if ($subscription_id) {
      $status = pwb_subscribe_remove_subscription($subscription_id);
      if($status) {
        $message = variable_get('pwb_subscribe_unsubscribe_message', t('You successfully unsubscribed from the selected lists'));
        drupal_set_message($message);
      }
    }
  }
}


/**
 * Show all the lists of terms that the user is subscribed to
 */
function pwb_subscribe_list($token) {
  $subscriptions = pwb_subscribe_load_subscriptions(Null, $token);
  $output = '';

  $list = array();
  if($subscriptions) {
    foreach(current($subscriptions) as $key => $sub) {
      foreach($sub as $val) {
        $tmp = pwb_subscribe_parse_url($val->subscription_uri);
        $label = pwb_subscribe_filters_label($tmp[1]['filter']);

        $list[$val->id] = $label;
      }
    }

    $form = drupal_get_form('pwb_subscribe_list_form', $list);
    $output = drupal_render($form);
  } else {
    $output = t('No Subscriptions avaible');
  }

  return $output;
}
