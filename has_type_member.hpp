#ifndef CPP_TMP_HAS_TYPE_MEMBER_HPP_
#define CPP_TMP_HAS_TYPE_MEMBER_HPP_

#include "integral_constant.hpp"
#include "void_t.hpp"

namespace tmp {

template <typename, typename = void>
struct has_type_member : false_type {};

template <typename T>
struct has_type_member<T, void_t<typename T::type>> : true_type {};

} /* tmp */
#endif /* ifndef CPP_TMP_HAS_TYPE_MEMBER_HPP_ */
