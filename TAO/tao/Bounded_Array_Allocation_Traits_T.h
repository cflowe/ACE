#ifndef guard_bounded_array_allocation_traits_hpp
#define guard_bounded_array_allocation_traits_hpp
/**
 * @file
 *
 * @brief Details can be found in the documentation for
 * TAO::details::generic_sequence
 *
 * $Id: Bounded_Array_Allocation_Traits_T.h 84506 2009-02-18 11:15:38Z vzykov $
 *
 * @author Carlos O'Ryan
 */

#include "tao/Basic_Types.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
namespace details
{

template<typename T, CORBA::ULong MAX, bool dummy>
struct bounded_array_allocation_traits
{
  typedef T value_type;

  inline static CORBA::ULong default_maximum()
  {
    return MAX;
  }

  inline static value_type * default_buffer_allocation()
  {
    return 0;
  }

  inline static value_type * allocbuf(CORBA::ULong /* maximum */)
  {
    return new value_type[MAX];
  }

  inline static value_type * allocbuf_noinit(CORBA::ULong /* maximum */)
  {
    return new value_type[MAX];
  }

  inline static void freebuf(value_type * buffer)
  {
    delete[] buffer;
  }
};

} // namespace details
} // namespace TAO


TAO_END_VERSIONED_NAMESPACE_DECL

#endif // guard_unbounded_array_allocation_traits_hpp
