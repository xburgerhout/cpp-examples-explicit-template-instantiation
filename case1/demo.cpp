/*                                         Copyright (c) 2020 TNO DIANA BV */

#include "myclass.h"

#include <iostream>
#include <string>

void someFunction()
{
  auto asInt    = MyClass<int>{ 1976 };
  auto asDouble = MyClass<double>{ 2.718 };
  //auto asString = MyClass<std::string>{ "Hello, world!" }; // ERROR!

  asInt.printSelf();
  asDouble.printSelf();
  //asString.printSelf(); // ERROR!
}
