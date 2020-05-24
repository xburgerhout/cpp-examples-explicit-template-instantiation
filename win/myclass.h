/*                                         Copyright (c) 2020 TNO DIANA BV */
#ifndef MYCLASS_H
#define MYCLASS_H

#include <string>

#include "myclass_exports.h"

class MC_API MyClass
{
public:
  MyClass();

  void printSelf();

  template <typename T>
  void addValue( T t );

private:
  std::string m_text;
};

MC_API void someFunction();
MC_API void someFunctionUsingMyBaseTemplate();

//////////////////////////////////////////////////////////////////////////////
// Simple 'archive' class we can instantiate and feed to 'serialize()'
class MC_API TestArchive
{
public:
  void field(int val);
  void field(double val);
  void field(std::string val);
};

//////////////////////////////////////////////////////////////////////////////
// More involved example: template class with template method

template < typename T>
class MyBaseTemplate
{
public:
  MyBaseTemplate(T t = T());
  virtual ~MyBaseTemplate();

  virtual void printSelf();

  template <typename Archive>
  void serialize(Archive& archive);

protected:
  T m_t;
};

// Announce template instantiations for int/double of MyClass
extern template void MyClass::addValue<int>(int t);
extern template void MyClass::addValue<double>(double t);

// Announce class template instantiations for int/double of MyBaseTemplates
extern template class MyBaseTemplate<int>;
extern template class MyBaseTemplate<double>;

// Announce template method instantiations
extern template void MyBaseTemplate<int>::serialize(TestArchive&);
extern template void MyBaseTemplate<double>::serialize(TestArchive&);


#endif // MYCLASS_H
