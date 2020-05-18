/*                                         Copyright (c) 2020 TNO DIANA BV */

#include "myclass.h"

#include <iostream>
#include <string>

void someFunction()
{
  MyClass c;

  c.addValue( 1976 );
  c.addValue( 2.718 );
  //c.addValue( "Hello, world!" ); // ERROR!
  c.printSelf();
}
