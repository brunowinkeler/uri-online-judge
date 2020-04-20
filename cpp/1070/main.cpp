#include <iostream>

int main(int argc, char const *argv[])
{
    int x;

    std::cin >> x;

    for (size_t i = ((x%2!=0)?x:x+1); i <= (x+11); i += 2)
    {
        std::cout << i << '\n';
    }

    return 0;
}