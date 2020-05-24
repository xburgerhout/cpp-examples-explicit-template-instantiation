#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>

template <typename T>
class MyClass
{
public:
  MyClass( T value = T{} );

  void printSelf();

private:
  T m_t;
};

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

#endif // MYCLASS_H
