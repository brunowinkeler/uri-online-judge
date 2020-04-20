#include <iostream>
#include <iomanip>
#include <string>

const double PI = 3.14159;

int main(int argc, char const *argv[])
{
    double a,b,c;

    std::cin >> a >> b >> c;

    std::cout << std::setprecision(3) << std::fixed;
    std::cout << "TRIANGULO: " << (a*c)/2 << "\n";
    std::cout << "CIRCULO: " << PI*c*c << "\n";
    std::cout << "TRAPEZIO: " << ((a+b)*c)/2 << "\n";
    std::cout << "QUADRADO: " << b*b << "\n";
    std::cout << "RETANGULO: " << a*b << "\n";

    return 0;
}