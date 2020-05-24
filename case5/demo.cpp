#include "myclass.h"

void someFunction()
{
  MyClass c;

  c.addValue( 1976 );
  c.addValue( 2.718 );
  //c.addValue( "Hello, world!" ); // ERROR!
  c.printSelf();
}
