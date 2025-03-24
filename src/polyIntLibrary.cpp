#include <iostream>
#include <cmath>
#include "polyIntLibrary.h"


using namespace std;

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

int main()
{
    etl::array<float, 3> coeffs_arr = {6.f, 8.f, 6.f};
    float lowerLimit = 4.f;
    float upperLimit = 8.f;

    float resultOfIntegration = 0.f;

    resultOfIntegration = integratePolynomial(coeffs_arr, lowerLimit, upperLimit);
    cout << "Result of integration: " << resultOfIntegration << endl;
    return 0;
}