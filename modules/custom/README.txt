INSTALL AND CONFIGURATION:

Enable the module as normal

Need to enable the filter in some "Text format"
Need to add some terms in Taxonomy Glossary (this is in Feature: feature_base_content_types)

Limitations:
Terms or there synonyms must NOT be valid html tag names. mostly: p, div, span, br so on. (the tags that are provided by the WYSYWIG redactor)
Terms or there synonyms must NOT be duplicates of other term or synonym in Glossary vocabulary, this will make one or more of the terms to not match and be overwriden by the other
