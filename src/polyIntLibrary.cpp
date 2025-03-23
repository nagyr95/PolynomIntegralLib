#include <iostream>
#include "polyIntLibrary.h"

using namespace std;

int main()
{
    etl::array<float, 3> coeffs_arr = {6.f, 8.f, 6.f};
    float lowerLimit = 4.f;
    float upperLimit = 8.f;
    /*unsigned int numOfCoeffs = sizeof(coeffs_arr)/sizeof(coeffs_arr[0]);
    cout << "In main the value of numOfCoeffs: " << numOfCoeffs << endl;*/
    float resultOfIntegration = 0.f;

    resultOfIntegration = integratePolynomial(coeffs_arr, lowerLimit, upperLimit);
    cout << resultOfIntegration << endl;
    return 0;
}