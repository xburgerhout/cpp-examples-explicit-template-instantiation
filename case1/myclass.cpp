/*                                         Copyright (c) 2020 TNO DIANA BV */
#include "myclass.h"
#include "myclass.hpp" // Needed for the explicit template instantiation below

// Explicit template instantiation
template class MyClass<int>;
template class MyClass<double>;

