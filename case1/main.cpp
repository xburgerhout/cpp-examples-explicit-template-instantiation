/*                                         Copyright (c) 2020 TNO DIANA BV */

#include "myclass.h"

#include <iostream>

extern void someFunction();

int main(int argc, char *argv[])
{

  auto asInt    = MyClass<int>{ 42 };
  auto asDouble = MyClass<double>{ 3.14 };

  asInt.printSelf();
  asDouble.printSelf();

  someFunction();

  return 0;
}
