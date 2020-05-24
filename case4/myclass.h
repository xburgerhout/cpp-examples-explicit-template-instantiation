#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>
#include <sstream>

class MyClass
{
public:
  MyClass();

  void printSelf();

  template <typename T>
  void addValue( T t );

private:
  std::string m_text;
};

template< typename T>
void MyClass::addValue( T value )
{
  std::stringstream ss;
  ss << "    " << value << std::endl;
  m_text += ss.str();
}

#endif // MYCLASS_H
