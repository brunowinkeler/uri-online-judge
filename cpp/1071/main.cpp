#include <iostream>

int main(int argc, char const *argv[])
{
    int x, y, cont = 0;
    int sum = 0;
    std::cin >> x;
    std::cin >> y;

    if (x > y) std::swap(x,y);

    cont = x + 1;
    while (cont < y)
    {
        if (cont % 2 != 0)
        {
            sum += cont;
        }
        cont++;
    }
    std::cout << sum << '\n';   
    
    return 0;
}