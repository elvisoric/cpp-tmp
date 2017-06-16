#ifndef CPP_TMP_IS_SAME_HPP_
#define CPP_TMP_IS_SAME_HPP_

#include "integral_constant.hpp"

namespace tmp {

template <typename T, typename U>
struct is_same : tmp::false_type {};

template <typename T>
struct is_same<T, T> : tmp::true_type {};

} /* tmp  */
#endif /* ifndef CPP_TMP_IS_SAME_HPP_ */
