#include <iostream>
#include <iomanip>
#include <string>

const double PI = 3.14159;

int main(int argc, char const *argv[])
{
    double raio;

    std::cout << std::setprecision(3) << std::fixed;
    std::cin >> raio;

    std::cout << "VOLUME = " << (4.0/3)*PI*raio*raio*raio << "\n";

    return 0;
}