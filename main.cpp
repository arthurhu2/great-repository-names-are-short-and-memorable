// @author G. Hemingway, copyright @2024 - All rights reserved

#include "singleton.h"
#include <iostream>

int main() {
  // Try to create two instances - how can we forbid this?
  Singleton* one = Singleton::instance();
  Singleton* two = Singleton::instance();

  std::cout << *one << *two << std::endl;
  return 0;
}
