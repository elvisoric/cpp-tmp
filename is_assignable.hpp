#ifndef CPP_TMP_IS_ASSIGNABLE_HPP_
#define CPP_TMP_IS_ASSIGNABLE_HPP_

#include <utility>
#include "integral_constant.hpp"
#include "is_same.hpp"
#include "void_t.hpp"

namespace tmp {

template <typename T, typename U>
using assignable_t = decltype(std::declval<T>() = std::declval<U>());

template <typename T, typename U, class = void>
struct is_assignable : tmp::false_type {};

template <typename T, typename U>
struct is_assignable<T, U, void_t<assignable_t<T, U>>> : true_type {};

} /* tmp  */
#endif /* ifndef CPP_TMP_IS_ASSIGNABLE_HPP_ */
