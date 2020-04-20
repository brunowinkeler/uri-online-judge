#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    int cont = 0;
    int cont_pares = 0;
    int cont_impares = 0;
    int cont_positivos = 0;
    int cont_negativos = 0;

    while (cont < 5)
    {
        int number;
        std::cin >> number;
        if (number % 2 == 0)
        {
            cont_pares++;
        }

        if (number % 2 != 0)
        {
            cont_impares++;
        }

        if (number > 0)
        {
            cont_positivos++;
        }

        if (number < 0)
        {
            cont_negativos++;
        }

        cont++;
    }

    std::cout << cont_pares << " valor(es) par(es)\n";
    std::cout << cont_impares << " valor(es) impar(es)\n";
    std::cout << cont_positivos << " valor(es) positivo(s)\n";
    std::cout << cont_negativos << " valor(es) negativo(s)\n";
    return 0;
}