#include <iostream>
int main()
{
    int a = 10;
    char b = 'A';
    float c = 3.13;
    double d = 34.35;

    std::cout << a << " " << b << "\n" << c << " " << d;
    std::cout << a << " " << b << std::endl << c << " " << d;

    return 0;
}