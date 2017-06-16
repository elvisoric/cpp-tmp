#ifndef CPP_TMP_IS_ONE_OF_HPP_
#define CPP_TMP_IS_ONE_OF_HPP_

#include "integral_constant.hpp"

namespace tmp {

template <typename T, typename... Args>
struct is_one_of;

template <typename T>
struct is_one_of<T> : tmp::false_type {};

template <typename T, typename... Args>
struct is_one_of<T, T, Args...> : tmp::true_type {};

template <typename T, typename S, typename... Args>
struct is_one_of<T, S, Args...> : is_one_of<T, Args...> {};

} /* tmp  */
#endif /* ifndef CPP_TMP_IS_ONE_OF_HPP_ */
