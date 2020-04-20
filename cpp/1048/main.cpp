#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    double salario, salario_novo, reajuste;
    int percentual;

    std::cin >> salario;

    if (salario >= 0 && salario <= 400.00)
    {
        percentual = 15;
    }
    else if (salario >= 400.01 && salario <= 800.0)
    {
        percentual = 12;
    }
    else if (salario >= 800.01 && salario <= 1200.00)
    {
        percentual = 10;
    }
    else if (salario >= 1200.01 && salario <= 2000.00)
    {
        percentual = 7;
    }
    else if (salario >= 2000.01)
    {
        percentual = 4;
    }
    
    reajuste = (salario * percentual)/100;
    salario_novo = salario + reajuste;
    
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "Novo salario: " << salario_novo
              << "\nReajuste ganho: " << reajuste
              << "\nEm percentual: " << percentual << " %\n";

    return 0;
}