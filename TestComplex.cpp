#include "Complex.h"

int main()
{
    ComplexNumber num1(3, 5);
    ComplexNumber num2(1, 1);
    std::cout << "Sum: " << num1 + num2 << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
}