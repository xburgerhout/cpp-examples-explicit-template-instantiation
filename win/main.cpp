/*                                         Copyright (c) 2020 TNO DIANA BV */

#include "myclass.h"

void localFunction1()
{
  MyClass c;

  c.addValue(1976);
  c.addValue(2.718);
  //c.addValue( "Hello, world!" ); // ERROR!
  c.printSelf();
}

void localFunction2()
{
  MyBaseTemplate<int>    mb_int(1976);
  MyBaseTemplate<double> mb_double(2.718);

  mb_int.printSelf();
  mb_double.printSelf();

  TestArchive arch;
  mb_int.serialize(arch);
  mb_double.serialize(arch);
}

int main(int argc, char *argv[])
{

  MyClass x;
  x.addValue( 42 );
  x.addValue( 3.14 );
  x.printSelf();

  someFunction();
  someFunctionUsingMyBaseTemplate();
  localFunction1();
  localFunction2();
  return 0;
}
