#include <iostream>

#include "shared_ptr.h"

int main() {

  shared_ptr<int> p1;
  shared_ptr<int> p2(new int(1));
  shared_ptr<int> p3(new int);
  shared_ptr<int> p4(p3);

  shared_ptr<int> p6(std::move(p2));
  std::cout << p6.use_count() << std::endl;
  p6 = p2;

  std::cout << p6.use_count() << std::endl;

  std::cout << "p1: " << p1.use_count() << '\n';
  std::cout << "p2: " << p2.use_count() << '\n';
  std::cout << "p3: " << p3.use_count() << '\n';
  std::cout << "p4: " << p4.use_count() << '\n';
  return 0;
}