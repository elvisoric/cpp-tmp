#ifndef CPP_TMP_IS_VOID_HPP_
#define CPP_TMP_IS_VOID_HPP_

#include "is_one_of.hpp"

namespace tmp {
template <typename T>
using is_void =
    is_one_of<T, void, void const, void volatile, void const volatile>;
} /* tmp  */
#endif /* ifndef CPP_TMP_IS_VOID_HPP_ */
