#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    int cont = 0;
    int cont_pares = 0;

    while (cont < 5)
    {
        int number;
        std::cin >> number;
        if (number % 2 == 0)
        {
            cont_pares++;
        }
        cont++;
    }

    std::cout << cont_pares << " valores pares\n";
    return 0;
}