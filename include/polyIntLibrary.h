#ifndef POLYINTLIBRARY_H_INCLUDED
#define POLYINTLIBRARY_H_INCLUDED

#include <iostream>
#include "etl/include/etl/array.h"


template<typename T, const size_t SIZE>
float integratePolynomial(const etl::array<T, SIZE> &coeffs, const float lowerLimit, const float upperLimit);


#endif // POLYINTLIBRARY_H_INCLUDED