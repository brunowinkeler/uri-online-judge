#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    int distancia;
    double combustivel;

    std::cin >> distancia;
    std::cin >> combustivel;

    std::cout << std::setprecision(3) << std::fixed;
    std::cout << distancia/combustivel << " km/l\n";

    return 0;
}