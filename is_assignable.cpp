#include "is_assignable.hpp"
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  std::cout << std::boolalpha << "int is assignable from int: "
            << tmp::is_assignable<int, int>::value << std::endl
            << "int& is assignable from int: "
            << tmp::is_assignable<int &, int>::value << std::endl
            << "int is assignable from double: "
            << tmp::is_assignable<int, double>::value << std::endl
            << "string is assignable from double: "
            << tmp::is_assignable<std::string, double>::value << std::endl;
  return 0;
}
