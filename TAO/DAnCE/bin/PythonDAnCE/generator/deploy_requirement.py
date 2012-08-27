# $Id: deploy_requirement.py 93359 2011-02-11 11:33:12Z mcorino $

from templet import stringfunction

@stringfunction
def template (requirement_name, requirement_type) :
    """
    <deployRequirement>
      <name>${requirement_name}</name>
      <resourceType>${requirement_type}</resourceType>
    </deployRequirement>
    """
    
