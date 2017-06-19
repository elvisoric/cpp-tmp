#include "is_move_assignable.hpp"
#include <iostream>

struct No {
  No& operator=(No&&) = delete;
};

struct Yes {
  Yes& operator=(Yes&&) { return *this; };
};

int main(int argc, char* argv[]) {
  std::cout << "is_move_assignable<int>: "
            << tmp::is_move_assignable<int>::value << std::endl;
  std::cout << "is_move_assignable<No>: " << tmp::is_move_assignable<No>::value
            << std::endl;
  std::cout << "is_move_assignable<Yes>: "
            << tmp::is_move_assignable<Yes>::value << std::endl;
  return 0;
}
