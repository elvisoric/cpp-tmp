#ifndef CPP_TMP_TYPE_IS_HPP_
#define CPP_TMP_TYPE_IS_HPP_

namespace tmp {

template <typename T>
struct type_is {
  using type = T;
};

} /* tmp  */
#endif /* ifndef CPP_TMP_TYPE_IS_HPP_ */
