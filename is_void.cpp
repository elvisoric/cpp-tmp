#include "is_void.hpp"
#include <iostream>

int main(int argc, char *argv[]) {
  std::cout << "is_void<int>: " << tmp::is_void<int>::value << std::endl;
  std::cout << "is_void<void>: " << tmp::is_void<void>::value << std::endl;
  std::cout << "is_void<void const>: " << tmp::is_void<void const>::value
            << std::endl;
  std::cout << "is_void<void volatile>: " << tmp::is_void<void volatile>::value
            << std::endl;
  std::cout << "is_void<void const volatile>: "
            << tmp::is_void<void const volatile>::value << std::endl;
  return 0;
}
