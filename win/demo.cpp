/*                                         Copyright (c) 2020 TNO DIANA BV */

#include "myclass.h"

void someFunction()
{
  MyClass c;

  c.addValue( 1976 );
  c.addValue( 2.718 );
  //c.addValue( "Hello, world!" ); // ERROR!
  c.printSelf();
}

void someFunctionUsingMyBaseTemplate()
{
  MyBaseTemplate<int>    mb_int(42);
  MyBaseTemplate<double> mb_double(3.14);

  mb_int.printSelf();
  mb_double.printSelf();
 
  TestArchive arch;
  mb_int.serialize(arch);
  mb_double.serialize(arch);
}
