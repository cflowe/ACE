# $Id: connection.py 93359 2011-02-11 11:33:12Z mcorino $
from templet import stringfunction

@stringfunction
def template (name, deployrequirement, endpoint_one, endpoint_two) :
    """
    <connection>
      <name>${name}</name>
      ${deployrequirement}
      ${endpoint_one}
      ${endpoint_two}
    </connection>
    """
