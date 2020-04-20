#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    int cont = 0;
    int cont_pos = 0;

    double media = 0;
    while (cont < 6)
    {
        double number;
        std::cin >> number;
        if (number > 0)
        {
            media += number;
            cont_pos++;
        }
        if (number != 0)
        {
            cont++;
        }
    }

    std::cout << cont_pos << " valores positivos\n";
    std::cout << std::setprecision(1) << std::fixed;
    std::cout << media/double(cont_pos) << '\n';
    return 0;
}