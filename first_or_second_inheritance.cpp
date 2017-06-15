#include "first_or_second.hpp"
#include <iostream>

struct first {
  void print() { std::cout << "first" << std::endl; }
};

struct second {
  void print() { std::cout << "second" << std::endl; }
};

struct true_inheritance : tmp::first_or_second<true, first, second>::type {};

struct false_inheritance : tmp::first_or_second<false, first, second>::type {};

int main(int argc, char *argv[]) {
  true_inheritance ti;
  ti.print();

  false_inheritance fi;
  fi.print();

  return 0;
}
