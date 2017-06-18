#include "has_type_member.hpp"
#include <iostream>

struct A{
  using type = int;
};

int main(int argc, char *argv[])
{
  std::cout <<"has_type_member<int>: " <<  tmp::has_type_member<int>::value << std::endl;
  std::cout << "has_type_member<A>: " <<tmp::has_type_member<A>::value << std::endl;
  return 0;
}
