(function ($) {
  var mySettings = null;
  Drupal.behaviors.pwb_section = {
    attach: function (context, settings) {
      mySettings = settings;
      /*
      $('ul.notselected-mountain-tags li.notselected-mountain-tag a:not(.processed)', context).each(function() {
        jQuery(this).click(function () {
          var tmp = new Array();
          tmp.push(jQuery(this).attr('id').split('-')[2]);
          var url = '/ajax/section/' + settings.paramount_tag + '/';

          $('li.selected-mountain-tag a', context).each(function () {
        	tmp.push(jQuery(this).attr('id').split('-')[2]);
          });

          url += tmp.join('+');

          $.ajax({
      	    'url': url,
          	'success': function(data) {
          	  $('div.grid-full').html(data.html);
          	    Drupal.attachBehaviors(data.html);
                },
          	'dataType': "json"
          });

          return false;
        });

        jQuery(this).addClass('processed');
      });*/
    }
  };


/* Singleline functions
---------------------------------------------------------------- */

function $d(d){
  return document.getElementById(d);
}

var animating = false;

/* Tags
---------------------------------------------------------------- */
var tagz = function(){
  var tagzcount = 1;
  return {
    init:function(){
      var obj = $d('tags-default');
      if(obj){
        var count = 1;
        var items = obj.getElementsByTagName('li');
        for(var d=0;d<items.length;d+=1){
          items[d].id = 'tag'+count+'moth';
          var links = items[d].getElementsByTagName('a');
          for(var m=0;m<links.length;m+=1){
            links[m].id = 'tag'+count;
            links[m].onclick = function(){
              return tagz.add(this);
            };
          }
          count++;
        }
      var obj = $d('tags-added');
      if (obj) {
        var items = obj.getElementsByTagName('li');
        for(var d=0;d<items.length;d+=1){
          var links = items[d].getElementsByTagName('a');
          for(var m=0;m<links.length;m+=1){
            links[m].onclick = function(){
              return tagz.remove(this);
            };
          }
        }
      }
        // Animations block
        var blk = document.createElement("div");
        blk.className = 'tagzblock';
        blk.id = 'tagzblock';
        document.body.appendChild(blk);
      }
    },
    add:function(f){
      if (!animating) {
        animating = true;
        var obj = $d('tags-added');
        var elm = $d(f.id+'moth');
        var existingAdded = $d('add'+f.id.substring(3));
//        alert(existingAdded);
//        $d('#tags-default').addClass('animating');
        if(obj && elm){
          if (f.className.indexOf('disabled')>-1) return false;
          if (Modernizr.history) {
            elm.style.visibility = 'hidden';
          }
          if (!existingAdded) {
            obj.innerHTML += '<li id="add'+tagzcount+'moth" class="tag-link tag-selected selected-mountain-tag" style="visibility:hidden;"><a href="#" title="" id="add'+tagzcount+'" class="clickable" rel="'+f.id+'">'+f.innerHTML+'</a><span class="autohide" id="add'+tagzcount+'span">'+f.rel+'</span></li>';
          } else {
            existingAdded.style.display = 'block';
          }
          var items = obj.getElementsByTagName('li');
          for(var d=0;d<items.length;d+=1){
            var links = items[d].getElementsByTagName('a');
            for(var m=0;m<links.length;m+=1){
              links[m].onclick = function(){
                return tagz.remove(this);
              };
            }
          }
          if (!existingAdded) {
            tagz.animate(f.id,tagzcount);
            tagzcount++;
          } else {
            tagz.animate(f.id,f.id.substring(3));
          }
        }
        try{f.blur();}catch(e){}
      } else {
      }
      return false;
    },
    remove:function(f){
      if (!animating) {
        var par = $d(f.rel+'moth');
        var elm = $d(f.id+'moth');
        if(elm){
          par.style.display = 'block';
          elm.style.display = 'none';
          elm.style.visibility = 'hidden';
          var str = '';
          var urlStr = '';
          var obj = $d('tags-added');
          var items = obj.getElementsByTagName('li');
          for(var d=0;d<items.length;d+=1){
            if(items[d].style.visibility=='visible'){
  //            alert(items[d].innerHTML);
              var spans = items[d].getElementsByTagName('span');
              for(var m=0;m<spans.length;m+=1){
                str+=spans[m].innerHTML + '+';

              }
              var atags = items[d].getElementsByTagName('a');
              for(var m=0;m<atags.length;m+=1){
                urlStr+=atags[m].innerHTML + '/';
              }
            }
          }
          var nstr = str.substring(0, str.length-1);
          var nurlStr = urlStr.substring(0, urlStr.length-1);
  //        alert(mySettings.paramount_tag);
          var url = '/ajax/section/' + mySettings.paramount_tag + '/' + nstr;
  //        console.log(mySettings);
  //        alert(url);
          var newUrl = '/'+mySettings.paramount_url+'/'+nurlStr; // How do i get that ?
  //        alert(newUrl);

          var canRewriteUrlField = false;
          if (Modernizr.history) {
            canRewriteUrlField = true;
          }
          if (canRewriteUrlField) {
            alert('WHAT:' + newUrl);
            window.history.pushState(newUrl, mySettings.paramount_url + ' | Personaleweb', newUrl);
            $.ajax({
              'url': url,
              'success': function(data) {
                $('div.grid-full').html(data.html);
                  Drupal.attachBehaviors(data.html);
  //                      data.not_clickable_tags.each(function() {alert('123')})
                  var obj = $d('tags-default');
                  if (obj) {
                    var items = obj.getElementsByTagName('li');
                    for(var d=0;d<items.length;d+=1){
                      var atags = items[d].getElementsByTagName('a');
                      for(var m=0;m<atags.length;m+=1){
                        for(var index in data.not_clickable_tags) {
                          atags[m].className.replace(' link-disabled','');
                          items[d].className.replace(' tag-disabled','');
                          if (atags[m].innerHTML == data.not_clickable_tags[index]) {
                            atags[m].className+=' link-disabled';
                            items[d].className+=' tag-disabled';
  //                          alert( index + " : " + data.not_clickable_tags[index]);
                          }
                        }                
                      }
                    }
                  }
  //                alert('DONE');
//                  tagz.doneremove(f.id,tagzcount);
                  animating = false;

            //      $d('#tags-default').toggleClass('animating');
                 },
              'dataType': "json"
            });
          } else {
  //          alert('Redirect');
            document.location.href = newUrl;
            // Change adress in navigation bar, how to get the url ?
          }
        }
        try{f.blur();}catch(e){}
      }
      return false;
    },
    animate:function(f,c){
      var obj = $d(f);
      var elm = $d('add'+c+'moth');
      var blk = $d('tagzblock');
      if(obj && elm && blk){
        var eold = library.elementposition(obj);
        var stmp = eold.split('/');
        elm.style.display='block';
        var enew = library.elementposition(elm);
        elm.style.display='none';
        var etmp = enew.split('/');
        blk.innerHTML = '<div class="tag-link-fake">'+obj.innerHTML+'</div>';
        blk.style.left = (parseInt(stmp[0]) - 20) + 'px';
        blk.style.top = (parseInt(stmp[1]) - 2) + 'px';
        var nl = parseInt(etmp[0]);
        var nt = parseInt(etmp[1]);
        tagz.opa('tagzblock',10);
        $d('tagzblock').style.opacity = '0.1';
        var canRewriteUrlField = false;
        if (Modernizr.history) {
          $('#tagzblock').animate({
            left:nl+'px',
            top:nt+'px',
            opacity:1
          },200,'swing',function(){tagz.done(f,c);});
        } else {
          var obj = $d('tags-added');
          if(obj){
            var urlStr = '';
            var items = obj.getElementsByTagName('li');
            for(var d=0;d<items.length;d+=1){
              var atags = items[d].getElementsByTagName('a');
              for(var m=0;m<atags.length;m+=1){
                urlStr+=atags[m].innerHTML + '/';
              }
            }
            var nurlStr = urlStr.substring(0, urlStr.length-1);
            var newUrl = '/'+mySettings.paramount_url+'/'+nurlStr; // How do i get that ?
            document.location.href=newUrl;
//            alert(newUrl);
          }
        }
      }
    },
    doneremove:function(f,c){
      var obj = $d(f+'moth');
      var elm = $d('add'+c+'moth');
      var blk = $d('tagzblock');
      if(obj && elm && blk){
        obj.style.visibility = 'visible';
        obj.style.display = 'none';
        elm.style.visibility = 'visible';
        elm.style.display = 'block';
        blk.style.left = '-10000px';
      }
    },
    done:function(f,c){
      var obj = $d(f+'moth');
      var elm = $d('add'+c+'moth');
      var blk = $d('tagzblock');
      if(obj && elm && blk){
        obj.style.visibility = 'visible';
        obj.style.display = 'none';
        elm.style.visibility = 'visible';
        elm.style.display = 'block';
        blk.style.left = '-10000px';
      }
      tagz.selected();
    },
    selected:function(){
      var obj = $d('tags-added');
      if(obj){
        var str = '';
        var urlStr = '';
        var items = obj.getElementsByTagName('li');
        for(var d=0;d<items.length;d+=1){
          if(items[d].style.visibility=='visible'){
//            alert(items[d].innerHTML);
            var spans = items[d].getElementsByTagName('span');
            for(var m=0;m<spans.length;m+=1){
              str+=spans[m].innerHTML + '+';

            }
            var atags = items[d].getElementsByTagName('a');
            for(var m=0;m<atags.length;m+=1){
              urlStr+=atags[m].innerHTML + '/';
            }
          }
        }
        var nstr = str.substring(0, str.length-1);
        var nurlStr = urlStr.substring(0, urlStr.length-1);
//        alert(mySettings.paramount_tag);
        var url = '/ajax/section/' + mySettings.paramount_tag + '/' + nstr;
//        console.log(mySettings);
//        alert(url);
        var newUrl = '/'+mySettings.paramount_url+'/'+nurlStr; // How do i get that ?
//        alert(newUrl);

        var canRewriteUrlField = false;
        if (Modernizr.history) {
          canRewriteUrlField = true;
        }
        if (canRewriteUrlField) {
//          alert('AJAX');
          $.ajax({
            'url': url,
            'success': function(data) {
              $('div.grid-full').html(data.html);
                Drupal.attachBehaviors(data.html);
//                      data.not_clickable_tags.each(function() {alert('123')})
                var obj = $d('tags-default');
                if (obj) {
                  var items = obj.getElementsByTagName('li');
                  for(var d=0;d<items.length;d+=1){
                    var atags = items[d].getElementsByTagName('a');
                    for(var m=0;m<atags.length;m+=1){
                      for(var index in data.not_clickable_tags) {
                        atags[m].className.replace(' link-disabled','');
                        items[d].className.replace(' tag-disabled','');
                        if (atags[m].innerHTML == data.not_clickable_tags[index]) {
                          atags[m].className+=' link-disabled';
                          items[d].className+=' tag-disabled';
//                          alert( index + " : " + data.not_clickable_tags[index]);
                        }
                      }                
                    }
                  }
                }
//                alert('Url to push:'+newUrl);
                window.history.pushState(newUrl, mySettings.paramount_url + ' | Personaleweb', newUrl);
//                alert('DONE');
                animating = false;

          //      $d('#tags-default').toggleClass('animating');
               },
            'dataType': "json"
          });
        } else {
//          alert('Redirect');
          document.location.href = newUrl;
          // Change adress in navigation bar, how to get the url ?
        }
      }
    },
    opa:function(id,opacity){
      var obj = $d(id).style;
      if(obj){
        obj.opacity = (opacity / 100);
        obj.MozOpacity = (opacity / 100);
        obj.KhtmlOpacity = (opacity / 100);
        obj.filter = "alpha(opacity=" + opacity + ")";
      }
    }
  };
}();

/* Library
---------------------------------------------------------------- */

var library = function(){
  return {
    elementposition:function(obj){
      var curleft=curtop=0;
      if(obj.offsetParent){
        curleft=obj.offsetLeft;
        curtop=obj.offsetTop;
        while(obj=obj.offsetParent){
          curleft+=obj.offsetLeft
          curtop+=obj.offsetTop
        }
      }
      return curleft+'/'+curtop;
    },
    documentdimensions:function(){
      var myWidth = 0, myHeight = 0;
      if(typeof(window.innerWidth)=='number'){
        myWidth = window.innerWidth;
        myHeight = window.innerHeight;
      }else if(document.documentElement && (document.documentElement.clientWidth || document.documentElement.clientHeight)){
        myWidth = document.documentElement.clientWidth;
        myHeight = document.documentElement.clientHeight;
      }else if(document.body && (document.body.clientWidth || document.body.clientHeight)){
        myWidth = document.body.clientWidth;
        myHeight = document.body.clientHeight;
      }
      return myWidth+'/'+myHeight;
    },
    scrollposition:function(){
      var myTop = 0, myLeft = 0;
      if(document.all){
        myLeft = (document.documentElement.scrollLeft) ? document.documentElement.scrollLeft : document.body.scrollLeft;
        myTop = (document.documentElement.scrollTop) ? document.documentElement.scrollTop : document.body.scrollTop;
      }else{
        myLeft = window.pageXOffset;
        myTop = window.pageYOffset
      }
      return myLeft+'/'+myTop;
    },
    viewport:function(){
      var doc = library.documentdimensions();
      var scl = library.scrollposition();
      return doc+'/'+scl;
    },
    whichelement:function(e){
      var targ,found=false;
      if(!e){var e=window.event;}
      if(e.target){targ=e.target;}else if(e.srcElement){targ=e.srcElement;}
      if(targ.nodeType==3){targ=targ.parentNode;}
      if(targ.className=='contextmenu'){found=true;}else{found=false;}
      return found;
    },
    keycode:function(evt){
      evt = (evt) ? evt : ((event) ? event : null);
      var evver = (evt.target) ? evt.target : ((evt.srcElement) ? evt.srcElement : null );
      var keynumber = evt.keyCode;
      if(keynumber){return keynumber;}
    },
    getstyle:function(el,prop){
      var x = el;var y;
      if(x.currentStyle){
        y = x.currentStyle[prop];
      }else if (window.getComputedStyle){
        y = document.defaultView.getComputedStyle(x,null).getPropertyValue(prop);
      }
      return y;
    }
  };
}();

window.onload = function(){
  tagz.init();
}

}(jQuery));


