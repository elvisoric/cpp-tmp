#include "abs.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
  std::cout <<"abs<3>: "<<tmp::abs<3>::value<< std::endl;
  std::cout <<"abs<-3>: "<<tmp::abs<-3>::value<< std::endl;
  return 0;
}
