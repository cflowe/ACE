// -*- C++ -*-
//
// $Id: Cleanup_Func_Registry.inl 69150 2005-11-02 07:13:04Z ossama $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE
TAO_Cleanup_Func_Registry::TAO_Cleanup_Func_Registry (void)
  : cleanup_funcs_ ()
{
}

ACE_INLINE size_t
TAO_Cleanup_Func_Registry::size (void) const
{
  return this->cleanup_funcs_.size ();
}

TAO_END_VERSIONED_NAMESPACE_DECL
