#ifndef CPP_TMP_FIRST_OR_SECOND_HPP_
#define CPP_TMP_FIRST_OR_SECOND_HPP_

#include "type_is.hpp"

namespace tmp {

template <bool, typename T, typename>
struct first_or_second : tmp::type_is<T> {};

template <typename T, typename F>
struct first_or_second<false, T, F> : tmp::type_is<F> {};

} /* tmp */
#endif /* ifndef CPP_TMP_FIRST_OR_SECOND_HPP_ */
