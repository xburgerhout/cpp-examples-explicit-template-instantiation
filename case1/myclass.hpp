/*                                         Copyright (c) 2020 TNO DIANA BV */
#ifndef MYCLASS_HPP
#define MYCLASS_HPP

#include "myclass.h"
#include <iostream>

template< typename T>
MyClass<T>::MyClass( T value )
  : m_t( value )
{
}

template< typename T>
void MyClass<T>::printSelf()
{
  std::cout << "The value of m_t is " << m_t << std::endl;
}

#endif // MYCLASS_HPP
