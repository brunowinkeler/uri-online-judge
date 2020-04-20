#include <iostream>
#include <iomanip>

const double PI = 3.14159;

int main(int argc, char const *argv[])
{
    double raio;

    std::cin >> raio;
    std::cout << std::setprecision(4) << std::fixed;
    std::cout << "A=" << PI*(raio*raio) << "\n";

    return 0;
}
