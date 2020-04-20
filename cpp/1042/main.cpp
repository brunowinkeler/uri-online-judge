#include <iostream>

int main(int argc, char const *argv[])
{
    int a,b,c;
    int a_old, b_old, c_old;
    int aux;
    std::cin >> a >> b >> c;

    a_old = a;
    b_old = b;
    c_old = c;

    if(a>b)
    {
        aux = b;
        b = a;
        a = aux;
    }

    if (b>c)
    {
        aux = c;
        c = b;
        b = aux;
    }
    
    if(a>b)
    {
        aux = b;
        b = a;
        a = aux;
    }

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << '\n';
    std::cout << a_old << std::endl;
    std::cout << b_old << std::endl;
    std::cout << c_old << std::endl;

    return 0;
}