#ifndef MYCLASS_HPP
#define MYCLASS_HPP

#include "myclass.h"

#include <iostream>
#include <sstream>

template< typename T>
void MyClass::addValue( T value )
{
  std::stringstream ss;
  ss << "    " << value << std::endl;
  m_text += ss.str();
}


//////////////////////////////////////////////////////////////////////////////

template <typename T>
MyBaseTemplate<T>::MyBaseTemplate(T t) :
  m_t(t)
{
}

template <typename T>
MyBaseTemplate<T>::~MyBaseTemplate()
{}

template <typename T>
void MyBaseTemplate<T>::printSelf()
{
  std::cout << "Base:" << m_t << std::endl;
}

template< typename T>
template< typename Archive>
void MyBaseTemplate<T>::serialize(Archive& archive)
{
  archive.field(m_t);
}

//////////////////////////////////////////////////////////////////////////////
#endif // MYCLASS_HPP