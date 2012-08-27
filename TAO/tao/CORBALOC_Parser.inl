// -*- C++ -*-
//
// $Id: CORBALOC_Parser.inl 79237 2007-08-07 09:48:21Z johnnyw $

#if (TAO_HAS_CORBALOC_PARSER == 1)

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE
TAO_CORBALOC_Parser::TAO_CORBALOC_Parser (void)
{
}

ACE_INLINE
TAO_CORBALOC_Parser::parsed_endpoint::parsed_endpoint (void)
 : profile_ (0)
{
}

ACE_INLINE
TAO_CORBALOC_Parser::parsed_endpoint::~parsed_endpoint (void)
{
  if (this->profile_ != 0)
    this->profile_->_decr_refcnt();
}

TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* TAO_HAS_CORBALOC_PARSER == 1 */
