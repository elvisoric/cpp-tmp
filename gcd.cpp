#include "gcd.hpp"
#include <iostream>

int main(int argc, char *argv[]) {
  std::cout << "gcd<8,4>: " << tmp::gcd<8, 4>::value << std::endl;
  std::cout << "gcd<33,14>: " << tmp::gcd<33, 14>::value << std::endl;
  std::cout << "gcd<132,42>: " << tmp::gcd<132, 42>::value << std::endl;
  return 0;
}
