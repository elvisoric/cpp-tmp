#ifndef CPP_TMP_GCD_HPP_
#define CPP_TMP_GCD_HPP_

/* gcd stands for greatest common divisor */
namespace tmp {

template <unsigned M, unsigned N>
struct gcd {
  static constexpr unsigned value = gcd<N, M % N>::value;
};

template <unsigned M>
struct gcd<M, 0>{
  static constexpr unsigned value = M;
};

} /* tmp  */
#endif /* ifndef CPP_TMP_GCD_HPP_ */
