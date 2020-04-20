#include <iostream>

int main(int argc, char const *argv[])
{
    int x;

    std::cin >> x;

    for (size_t i = 1; i <= x; i += 2)
    {
        std::cout << i << '\n';
    }

    return 0;
}
