// -*- C++ -*-
//
// $Id: CEC_Reactive_ConsumerControl.inl 73791 2006-07-27 20:54:56Z wotte $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE
TAO_CEC_Ping_Push_Consumer::
    TAO_CEC_Ping_Push_Consumer (TAO_CEC_ConsumerControl *control)
  :  control_ (control)
{
}

// ****************************************************************

ACE_INLINE
TAO_CEC_Ping_Pull_Consumer::
    TAO_CEC_Ping_Pull_Consumer (TAO_CEC_ConsumerControl *control)
  :  control_ (control)
{
}

TAO_END_VERSIONED_NAMESPACE_DECL
