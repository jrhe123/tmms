#include "Singleton.h"
#include <iostream>

using namespace tmms::base;

class A : public NonCopyable
{
public:
  A() = default;
  ~A() = default;

  void Print()
  {
    std::cout << "This is A" << std::endl;
  }
};

int main(int argc, const char **argv)
{
  auto sA = tmms::base::Singleton<A>::Instance();
  sA->Print();

  return 0;
}