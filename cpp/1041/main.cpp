#include <iostream>

int main(int argc, char const *argv[])
{
    float x,y;

    std::cin >> x >> y;

    if (x > 0 && y > 0)
    {
        std::cout << "Q1\n";
    }
    else if (x < 0 && y > 0)
    {
        std::cout << "Q2\n";
    }
    else if (x < 0 && y < 0)
    {
        std::cout << "Q3\n";
    }
    else if (x > 0 && y < 0)
    {
        std::cout << "Q4\n";
    }
    else if (x == 0 && y != 0)
    {
        std::cout << "Eixo Y\n";
    }
    else if (x != 0 && y == 0)
    {
        std::cout << "Eixo X\n";
    }
    else
    {
        std::cout << "Origem\n";
    }

    return 0;
}
