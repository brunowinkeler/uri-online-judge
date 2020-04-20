#include <iostream>
#include <iomanip>
#include <cmath>

int main(int argc, char const *argv[])
{
    double x1,y1;
    double x2,y2;

    std::cin >> x1 >> y1;
    std::cin >> x2 >> y2;

    std::cout << std::setprecision(4) << std::fixed;
    std::cout << std::sqrt(std::pow(x2-x1,2) + std::pow(y2-y1,2))  << "\n";

    return 0;
}