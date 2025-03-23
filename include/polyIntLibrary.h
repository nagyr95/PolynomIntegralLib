#ifndef POLYINTLIBRARY_H_INCLUDED
#define POLYINTLIBRARY_H_INCLUDED

#include <iostream>
#include "array.h"
#include <cmath>


template<typename T, const size_t SIZE>
float integratePolynomial(const etl::array<T, SIZE> &coeffs, const float lowerLimit, const float upperLimit)
{
    float integral = 0.f;
    float lowLimitIntegral = 0.f;
    int i = 0;
    for(i = 0; i < SIZE; i++)
    {
        integral += (coeffs[i]*pow(upperLimit, i+1)) / (i+1);
        lowLimitIntegral += (coeffs[i]*pow(lowerLimit, i+1)) / (i+1);
    }
    integral -= lowLimitIntegral;

    return integral;
}

#endif // POLYINTLIBRARY_H_INCLUDED