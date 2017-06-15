#ifndef CPP_TMP_ABS_HPP_
#define CPP_TMP_ABS_HPP_

namespace tmp {

template <int N>
struct abs {
  static constexpr int value = (N < 0) ? -N : N;
};

} /* tmp */
#endif /* ifndef CPP_TMP_ABS_HPP_ */
