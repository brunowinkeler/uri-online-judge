#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    int ddd;
    std::string result;

    std::cin >> ddd;

    if (ddd == 61)
    {
        result = "Brasilia";
    }
    else if (ddd == 71)
    {
        result = "Salvador";
    }
    else if (ddd == 11)
    {
        result = "Sao Paulo";
    }
    else if (ddd == 21)
    {
        result = "Rio de Janeiro";
    }
    else if (ddd == 32)
    {
        result = "Juiz de Fora";
    }
    else if (ddd == 19)
    {
        result = "Campinas";
    }
    else if (ddd == 27)
    {
        result = "Vitoria";
    }
    else if (ddd == 31)
    {
        result = "Belo Horizonte";
    }
    else
    {
        result = "DDD nao cadastrado";
    }
    
    std::cout << result << "\n";

    return 0;
}