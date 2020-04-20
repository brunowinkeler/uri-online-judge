#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    double a,b,c;
    double aux;
    std::cin >> a >> b >> c;
    
    if(a<b)
    {
        aux = b;
        b = a;
        a = aux;
    }

    if (b<c)
    {
        aux = c;
        c = b;
        b = aux;
    }

    if(a<b)
    {
        aux = b;
        b = a;
        a = aux;
    }

    if (a >= b+c)
    {
        std::cout << "NAO FORMA TRIANGULO\n";
    }
    else
    {
        if ((a*a) == ((b*b) + (c*c)))
        {
            std::cout << "TRIANGULO RETANGULO\n";
        }
        else if ((a*a) > ((b*b) + (c*c)))
        {
            std::cout << "TRIANGULO OBTUSANGULO\n";
        }
        else
        {
            std::cout << "TRIANGULO ACUTANGULO\n";
        }

        if (a == b && b == c)
        {
            std::cout << "TRIANGULO EQUILATERO\n";
        }
        else if (a == b || b == c || a == c)
        {
            std::cout << "TRIANGULO ISOSCELES\n";
        }
    }

    return 0;
}