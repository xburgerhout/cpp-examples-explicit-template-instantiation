/*                                         Copyright (c) 2020 TNO DIANA BV */

#include "myclass.h"
#include "myclass.hpp" // Needed for the explicit template instantiations below

#include <iostream>

// Explicit instantiation
template MC_API void MyClass::addValue<int>( int t );
template MC_API void MyClass::addValue<double>( double t );

MyClass::MyClass() = default;

void MyClass::printSelf()
{
  std::cout << "m_text is now:" << std::endl
            << m_text << std::endl;
}

//////////////////////////////////////////////////////////////////////////////

// Explicit class template instantiations for int/double
template class MC_API MyBaseTemplate<int>;
template class MC_API MyBaseTemplate<double>;

// Explicit template method instantiations
template void MC_API MyBaseTemplate<int>::serialize(TestArchive&);
template void MC_API MyBaseTemplate<double>::serialize(TestArchive&);

//////////////////////////////////////////////////////////////////////////////
// TestArchive implementation

void TestArchive::field(int val)
{
  std::cout << "serializing int " << val <<std::endl;
}

void TestArchive::field(double val)
{
  std::cout << "serializing double" << val << std::endl;
}

void TestArchive::field(std::string val)
{
  std::cout << "serializing string" << val << std::endl;
}