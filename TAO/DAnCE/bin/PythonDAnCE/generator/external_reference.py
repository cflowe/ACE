# $Id: external_reference.py 93359 2011-02-11 11:33:12Z mcorino $

from templet import stringfunction

@stringfunction
def template (location, provider, name, supportedtype) :
    """
    <externalReference>
      <location>${location}</location>
      <provider>${provider}</provider>
      <portName>${name}</portName>
      <supportedType>${supportedtype}</supportedType>
    <externalReference>
    """

