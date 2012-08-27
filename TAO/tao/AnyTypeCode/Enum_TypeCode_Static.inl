// -*- C++ -*-
//
// $Id: Enum_TypeCode_Static.inl 72138 2006-04-19 09:23:57Z jwillemsen $


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE
TAO::TypeCode::Enum<char const *,
                    char const * const *,
                    TAO::Null_RefCount_Policy>::Enum (
  char const * id,
  char const * name,
  char const * const * enumerators,
  CORBA::ULong nenumerators)
  : ::CORBA::TypeCode (CORBA::tk_enum)
  , ::TAO::Null_RefCount_Policy ()
  , base_attributes_ (id, name)
  , nenumerators_ (nenumerators)
  , enumerators_ (enumerators)
{
}

TAO_END_VERSIONED_NAMESPACE_DECL
