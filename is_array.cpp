#include "is_array.hpp"
#include <iostream>

struct A {};

int main(int argc, char *argv[]) {
  std::cout << std::boolalpha;
  std::cout << "is_array<A>: " << tmp::is_array<A>::value << std::endl;
  std::cout << "is_array<A[]>: " << tmp::is_array<A[]>::value << std::endl;
  std::cout << "is_array<A[3]>: " << tmp::is_array<A[3]>::value << std::endl;
  std::cout << "is_array<float>: " << tmp::is_array<float>::value << std::endl;
  std::cout << "is_array<int>: " << tmp::is_array<int>::value << std::endl;
  std::cout << "is_array<int[]>: " << tmp::is_array<int[]>::value << std::endl;
  std::cout << "is_array<int[3]>: " << tmp::is_array<int[3]>::value
            << std::endl;
  return 0;
}
