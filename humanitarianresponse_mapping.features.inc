<?php
/**
 * @file
 * humanitarianresponse_mapping.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function humanitarianresponse_mapping_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
