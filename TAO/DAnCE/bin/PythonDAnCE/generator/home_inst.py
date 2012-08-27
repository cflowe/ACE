# $Id: home_inst.py 93359 2011-02-11 11:33:12Z mcorino $
from templet import stringfunction

@stringfunction
def template (component_name) :
    """
  <instance xmi:id="${component_name}HomeInstance">
    <name>${component_name}Home</name>
    <node>NodeOne</node>
    <!-- hostname -->
    <source/>
    <implementation xmi:idref="${component_name}HomeImplementation" />
  </instance>
    """
