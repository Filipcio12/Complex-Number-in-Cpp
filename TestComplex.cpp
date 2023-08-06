#include "Complex.h"

int main()
{
    ComplexNumber a(1, 1);
    ComplexNumber b(2, 1);
    ComplexNumber c(1, 2);

    //a += b += c;
    //(a += b) += c;
    //a *= b *= c;
    //(a *= b) *= c;

    /*std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";
    std::cout << "c: " << c << "\n";*/

    std::cout << "a + 7 = " << a + 7 << "\n";
    std::cout << "7 + a = " << 7 + a << "\n";
    std::cout << "b * 5 = " << b * 5 << "\n";
    std::cout << "5 * b = " << 5 * b << "\n";
    std::cout << "c == 3.5 = " << (c == 3.5) << "\n";
    std::cout << "3.5 == c = " << (3.5 == c) << "\n";
    return 0;
}