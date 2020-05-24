
#include "myclass.h"

extern void someFunction();

int main(int argc, char *argv[])
{

  MyClass x;
  x.addValue( 42 );
  x.addValue( 3.14 );
  x.printSelf();

  someFunction();

  return 0;
}
