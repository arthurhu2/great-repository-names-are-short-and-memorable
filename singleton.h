// @author G. Hemingway, copyright @2024 - All rights reserved

#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>

class Singleton {
public:
  static Singleton* instance() {
    if (inst == nullptr) inst = new Singleton();
    return inst;
  }
private:
  static Singleton* inst;

  Singleton() { std::cout << "Singleton constructor" << std::endl; }
};

Singleton* Singleton::inst = nullptr;

std::ostream &operator<<(std::ostream &os, const Singleton &) {
  os << "Got one!" << std::endl;
  return os;
}

#endif // SINGLETON_H
