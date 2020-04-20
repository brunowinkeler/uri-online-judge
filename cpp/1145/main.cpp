#include <iostream>

int main(int argc, char const *argv[])
{
    int x, y;

    std::cin >> x >> y;

    if (x < 1 || x > 20 || y < x || y > 100000)
    {
        return -1;
    }

    int cont = 1;
    while (cont <= y)
    {
        for (size_t col = 1; col <= x; col++)
        {
            std::cout << cont;
            if (col < x)
            {
                std::cout << ' ';
            }
            cont ++;
        }
        std::cout << '\n';
    }
    return 0;
}
