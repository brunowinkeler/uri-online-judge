#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    double soma = 0;

    std::cout << std::setprecision(2) << std::fixed;

    for (size_t i = 1; i <= 100; i++)
    {
        soma += 1/double(i);
    }
    
    std::cout << soma << std::endl;

    return 0;
}