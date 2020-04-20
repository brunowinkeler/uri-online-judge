#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    double a,b,c;
    double media;

    std::cout << std::setprecision(1) << std::fixed;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    media = ((a*2)+(b*3)+(c*5))/10;

    std::cout << "MEDIA = " << media << "\n";

    return 0;
}
