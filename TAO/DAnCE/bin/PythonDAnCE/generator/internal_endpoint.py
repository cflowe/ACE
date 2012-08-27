# $Id: internal_endpoint.py 93359 2011-02-11 11:33:12Z mcorino $

from templet import stringfunction

@stringfunction
def template (name, provider, kind, instance) :
    """
    <internalEndpoint>
      <portName>${name}</portName>
      <provider>${provider}</provider>
      <kind>${kind}</kind>
      <instance xmi:idref="${instance}" />
    </internalEndpoint>
    """
