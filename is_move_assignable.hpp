#ifndef CPP_TMP_IS_MOVE_ASSIGNABLE_HPP_
#define CPP_TMP_IS_MOVE_ASSIGNABLE_HPP_

#include <utility>
#include "void_t.hpp"
#include "integral_constant.hpp"
#include "is_same.hpp"

namespace tmp {

template <typename T>
using move_assignable_t = decltype(std::declval<T&>() = std::declval<T&&>());

template <typename T, class = void>
struct is_move_assignable : tmp::false_type {};

template <typename T>
struct is_move_assignable<T, void_t<move_assignable_t<T>>>
    : is_same<move_assignable_t<T>, T&> {};

} /* tmp */

#endif /* ifndef CPP_TMP_IS_MOVE_ASSIGNABLE_HPP_ */
