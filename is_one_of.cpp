#include "is_one_of.hpp"
#include <iostream>

int main(int argc, char *argv[]) {
  std::cout << "is_one_of<int, int, double>: "
            << tmp::is_one_of<int, int, double>::value << std::endl;

  std::cout << "is_one_of<int, char, double>: "
            << tmp::is_one_of<int, char, double>::value << std::endl;

  std::cout << "is_one_of<int, char, double, float, int>: "
            << tmp::is_one_of<int, char, double, float, int>::value
            << std::endl;
  return 0;
}
