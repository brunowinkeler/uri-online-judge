#include <iostream>
#include <cmath>
#include <iomanip>

int main(int argc, char const *argv[])
{
    double a, b, c;
    double delta;
    double x1,x2;

    std::cout << std::setprecision(5) << std::fixed;
    std::cin >> a >> b >> c;

    delta = (b*b) - (4*a*c);

    if(delta < 0 || a == 0)
    {
        std::cout << "Impossivel calcular\n";
    }
    else
    {
        x1 = (-b + std::sqrt(delta))/(2*a);
        x2 = (-b - std::sqrt(delta))/(2*a);

        std::cout << "R1 = " << x1 << "\n";
        std::cout << "R2 = " << x2 << "\n";
    }  
    
    return 0;
}