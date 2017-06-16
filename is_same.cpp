#include "is_same.hpp"
#include <iostream>

int main(int argc, char *argv[]) {
  std::cout << "is_same<int, int>: " << tmp::is_same<int, int>::value
            << std::endl;
  std::cout << "is_same<short, int>: " << tmp::is_same<short, int>::value
            << std::endl;
  return 0;
}
