#include <iostream>

int main(int argc, char const *argv[])
{
    int cont = 0;
    int cont_pos = 0;
    while (cont < 6)
    {
        double number;
        std::cin >> number;
        if (number > 0)
        {
            cont_pos++;
        }
        if (number != 0)
        {
            cont++;
        }
    }

    std::cout << cont_pos << " valores positivos\n";
    return 0;
}