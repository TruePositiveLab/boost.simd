//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_MAXMAG_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_MAXMAG_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!
  @ingroup group-ieee

    Computes maxmag value of its parameter.

  **/
  template<typename T> auto maxmag(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-ieee

      Function object tied to simd::maxmag

      @see simd::maxmag
    **/
    const boost::dispatch::functor<tag::maxmag_> maxmag = {};
  }
} }
#endif

#include <boost/simd/function/definition/maxmag.hpp>
#include <boost/simd/arch/common/scalar/function/maxmag.hpp>
//#include <boost/simd/arch/common/function/simd/maxmag.hpp>

#endif