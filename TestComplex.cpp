#include "Complex.h"

int main()
{
    ComplexNumber a(2, 2);
    ComplexNumber b(3, 3);
    a += 2;
    std::cout << a << std::endl;
    return 0;
}