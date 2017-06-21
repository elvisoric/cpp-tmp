#ifndef CPP_TMP_IS_ARRAY_HPP_
#define CPP_TMP_IS_ARRAY_HPP_

#include <cstdint>
#include "integral_constant.hpp"

namespace tmp {

template <typename T>
struct is_array : false_type {};

template <typename T>
struct is_array<T[]> : true_type {};

template <typename T, std::size_t N>
struct is_array<T[N]> : true_type {};

} /* tmp  */

#endif /* ifndef CPP_TMP_IS_ARRAY_HPP_ */
