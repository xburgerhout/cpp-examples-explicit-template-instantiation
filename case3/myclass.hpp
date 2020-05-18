#include "myclass.h"

#include <sstream>

template< typename T>
void MyClass::addValue( T value )
{
  std::stringstream ss;
  ss << "    " << value << std::endl;
  m_text += ss.str();
}
