#include <iostream>

int main(int argc, char const *argv[])
{
    int x0 = 0, x1 = 1;
    int x_next, n;

    std::cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        std::cout << x0;
        if (i != n - 1)
        {
            std::cout << ' ';
        }
        
        x_next = x0 + x1;
        x0 = x1;
        x1 = x_next;
    }

    std::cout << '\n';
    
    return 0;
}
