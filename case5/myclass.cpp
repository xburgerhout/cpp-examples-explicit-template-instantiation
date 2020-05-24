#include "myclass.h"
#include "myclass.hpp" // Needed for the explicit template instantiation below

#include <iostream>

// Explicit instantiation
template void MyClass::addValue<int>( int t );
template void MyClass::addValue<double>( double t );

MyClass::MyClass() = default;

void MyClass::printSelf()
{
  std::cout << "m_text is now:" << std::endl
            << m_text << std::endl;
}
