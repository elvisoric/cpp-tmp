#ifndef CPP_TMP_INTEGRAL_CONSTANT_HPP_
#define CPP_TMP_INTEGRAL_CONSTANT_HPP_

namespace tmp {

template <typename T, T v>
struct integral_constant {
  static constexpr T value = v;
  operator T() { return value; }
  T operator()(){ return value;}
};

template<bool b>
using bool_constant = integral_constant<bool, b>;

using true_type = bool_constant<true>;
using false_type = bool_constant<false>;
} /* tmp */
#endif /* ifndef CPP_TMP_INTEGRAL_CONSTANT_HPP_ */
