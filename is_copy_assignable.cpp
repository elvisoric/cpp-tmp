#include "is_copy_assignable.hpp"
#include <iostream>

struct Yes {
  Yes& operator=(Yes const&) { return *this; }
};

struct No {
  No& operator=(No const&) = delete;
};

int main(int argc, char* argv[]) {
  std::cout << "is_copy_assignable<int>: "
            << tmp::is_copy_assignable<int>::value << std::endl;
  std::cout << "is_copy_assignable<Yes>: "
            << tmp::is_copy_assignable<Yes>::value << std::endl;
  std::cout << "is_copy_assignable<No>: " << tmp::is_copy_assignable<No>::value
            << std::endl;
  return 0;
}
