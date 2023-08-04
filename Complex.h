#pragma once

#include <iostream>

class ComplexNumber {
    public:
        double real;
        double imaginary;

        ComplexNumber(double real, double imaginary);
        friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& cNum);

        ComplexNumber& operator+(const ComplexNumber& cNum);
        ComplexNumber& operator-(const ComplexNumber& cNum);
        ComplexNumber& operator*(const ComplexNumber& cNum);
        ComplexNumber& operator/(const ComplexNumber& cNum);

        ComplexNumber& operator+=(const ComplexNumber& cNum);
        ComplexNumber& operator-=(const ComplexNumber& cNum);
        ComplexNumber& operator*=(const ComplexNumber& cNum);
        ComplexNumber& operator/=(const ComplexNumber& cNum);

        ComplexNumber& operator==(const ComplexNumber& cNum);
        ComplexNumber& operator!=(const ComplexNumber& cNum);

        double getAmplitude();
        double getPhase();
};