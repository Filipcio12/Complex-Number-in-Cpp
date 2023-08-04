#include "Complex.h"

int main()
{
    ComplexNumber num(1.2, -0.5);
    num.real = 3;
    std::cout << num;
}