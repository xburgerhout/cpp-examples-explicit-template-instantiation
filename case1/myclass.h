/*                                         Copyright (c) 2020 TNO DIANA BV */
#ifndef MYCLASS_H
#define MYCLASS_H

template <typename T>
class MyClass
{
public:
  MyClass( T value = T{} );

  void printSelf();

private:
  T m_t;
};

extern template class MyClass<int>;
extern template class MyClass<double>;

#endif // MYCLASS_H
