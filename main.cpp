#include <iostream>
#include <string>
#include "test_library.h"

int main()
{
  std::cout
      << "Hello!"
      << "\n";

  std::cout
      << examplemath::add(2, 3)
      << "\n";

  return 0;
}
