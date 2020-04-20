#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    double a,b,c;
    std::cin >> a >> b >> c;
    std::cout << std::setprecision(1) << std::fixed;
    if ((a >= b+c) || (b>=a+c) || (c>=a+b))
    {
        double area = ((a+b)*c)/2;
        std::cout << "Area = " << area << "\n";
    }
    else
    {
        double perimetro = a+b+c;
        std::cout << "Perimetro = " << perimetro << "\n";
    }
    
    return 0;
}