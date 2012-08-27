// $Id: Server_i.inl 35798 2000-10-27 23:13:34Z coryan $

ACE_INLINE
Server_i::Server_i (void)
  : done_ (0)
{
}

ACE_INLINE int
Server_i::done (void)
{
  return this->done_;
}
