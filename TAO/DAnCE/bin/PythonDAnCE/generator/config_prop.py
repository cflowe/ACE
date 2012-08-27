# $Id: config_prop.py 93359 2011-02-11 11:33:12Z mcorino $
from templet import stringfunction

@stringfunction
def template (name, typename, value) :
    """
    <configProperty>
      <name>${name}</name>
      <value>
        <type>
          <kind>tk_${typename}</kind>
        </type>
        <value>
          <${typename}>${value}</${typename}>
        </value>
      </value>
    </configProperty>
    """
