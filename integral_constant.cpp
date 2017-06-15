#include "integral_constant.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
  std::cout <<tmp::integral_constant<int, 3>::value  << std::endl;
  std::cout <<tmp::integral_constant<unsigned, 23>::value  << std::endl;

  std::cout <<tmp::integral_constant<unsigned, 25>{}() << std::endl;

  auto cast_this = tmp::integral_constant<unsigned, 25>{};
  std::cout <<"cast: " << (unsigned)cast_this<< std::endl;

  std::cout << "true_type, bool cast: " << (bool)tmp::true_type{}<< std::endl;
  std::cout << "false_type, bool cast: " << (bool)tmp::false_type{}<< std::endl;

  return 0;
}
