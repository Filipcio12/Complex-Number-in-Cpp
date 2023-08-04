#include "Complex.h"
#include <cmath>

ComplexNumber::ComplexNumber(double real, double imaginary)
{
    this->real = real;
    this->imaginary = imaginary;
}

std::ostream& operator<<(std::ostream& os, const ComplexNumber& cNum)
{
    char sign = 43 + 2*(cNum.imaginary < 0);
    os << cNum.real << " " << sign << " i" << fabs(cNum.imaginary);
    return os;
}