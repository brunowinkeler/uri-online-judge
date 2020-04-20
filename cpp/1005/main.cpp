#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    double a,b;
    double media;

    std::cout << std::setprecision(5) << std::fixed;
    std::cin >> a;
    std::cin >> b;
    media = ((a*3.5)+(b*7.5))/11;

    std::cout << "MEDIA = " << media << "\n";

    return 0;
}
