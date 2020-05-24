#ifndef MYCLASS_H
#define MYCLASS_H

#include <string>

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

// Announce template instantiations for int/double
extern template void MyClass::addValue<int>( int t );
extern template void MyClass::addValue<double>( double t );

#endif // MYCLASS_H
