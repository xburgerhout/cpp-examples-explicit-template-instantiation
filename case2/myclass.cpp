/*                                         Copyright (c) 2020 TNO DIANA BV */

#include "myclass.h"

MyClass::MyClass() = default;

void MyClass::printSelf()
{
  std::cout << "m_text is now:" << std::endl
            << m_text << std::endl;
}
