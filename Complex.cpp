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

ComplexNumber ComplexNumber::operator+(const ComplexNumber& cNum)
{
    ComplexNumber sum(real + cNum.real, imaginary + cNum.imaginary);
    return sum;
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& cNum)
{
    ComplexNumber diff(real - cNum.real, imaginary - cNum.imaginary);
    return diff;
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& cNum)
{
    ComplexNumber product(real*cNum.real - imaginary*cNum.imaginary, 
                    real*cNum.imaginary + imaginary*cNum.real);
    return product;
}

ComplexNumber ComplexNumber::operator/(const ComplexNumber& cNum)
{
    double denominator = (cNum.real*cNum.real + cNum.imaginary*cNum.imaginary);
    if (!denominator) {
        fprintf(stderr, "Can't divide by zero.\n");
        abort();
    }
    ComplexNumber quotient((real*cNum.real + imaginary*cNum.imaginary) / denominator,
                            (imaginary*cNum.real - real*cNum.imaginary) / denominator);
    return quotient;
}