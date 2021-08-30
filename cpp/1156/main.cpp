#include <iostream>
#include <iomanip>
#include <cmath>

int main(int argc, char const *argv[])
{
    double soma = 1.0;

    std::cout << std::setprecision(2) << std::fixed;

    for (size_t i = 1; i <= 19; i++)
    {
        soma += double((2*i) + 1)/double(std::pow(2,i));
    }
    
    std::cout << soma << std::endl;

    return 0;
}