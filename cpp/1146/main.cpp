#include <iostream>

int main(int argc, char const *argv[])
{
    int x;
    std::cin >> x;

    while (x != 0)
    {
        for (size_t i = 1; i <= x; i++)
        {
            std::cout << i;
            if (i != x)
            {
                std::cout << ' ';
            }
        }
        std::cout << '\n';

        std::cin >> x;
    }

    return 0;
}
