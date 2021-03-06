// -------------------------------------------------------------------------------------------------
//                              Copyright 2016 - NumScale SAS
//
//                   Distributed under the Boost Software License, Version 1.0.
//                        See accompanying file LICENSE.txt or copy at
//                            http://www.boost.org/LICENSE_1_0.txt
// -------------------------------------------------------------------------------------------------

/// bench for functor nthroot in simd mode for float type with raw_.
#include <simd_bench.hpp>
#include <boost/simd/function/nthroot.hpp>
#include <boost/simd/function/enumerate.hpp>
#include <boost/simd/detail/dispatch/meta/as_integer.hpp>

namespace nsb = ns::bench;
namespace bs =  boost::simd;
namespace bd =  boost::dispatch;
template < int N>
struct nthr
{
  template<class T> T operator()(const T & a) const
  {
    using i_t =  bd::as_integer_t<T>;
    return bs::raw_(bs::nthroot)(a, bs::enumerate<i_t>(N));
  }
};

DEFINE_BENCH_MAIN()
{
  using T = bs::pack<float>;
  run<T>(nthr<10>(), nsbg::rand<T>(0, 10));
}
