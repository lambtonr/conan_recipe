
#include <iostream>
#include <HelloWorld.hpp>

int main()
{
#ifdef NDEBUG
  std::cout << ConanLibrary::HelloWorld() << " Release!" << std::endl;
#else
  std::cout << ConanLibrary::HelloWorld() << " Debug!" << std::endl;
#endif
}
