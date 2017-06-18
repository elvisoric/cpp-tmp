#ifndef CPP_TMP_IS_COPY_ASSIGNABLE_HPP_
#define CPP_TMP_IS_COPY_ASSIGNABLE_HPP_

#include <utility>
#include "integral_constant.hpp"
#include "is_same.hpp"
#include "void_t.hpp"

namespace tmp {
template <typename T>
using copy_assignment_t =
    decltype(std::declval<T&>() = std::declval<T const&>());

template <typename T, class = void>
struct is_copy_assignable : tmp::false_type {};

template <typename T>
struct is_copy_assignable<T, void_t<copy_assignment_t<T>>>
    : is_same<copy_assignment_t<T>, T&> {};
} /* tmp  */
#endif /* ifndef CPP_TMP_IS_COPY_ASSIGNABLE_HPP_ */
