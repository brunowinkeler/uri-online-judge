#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    double salario;
    double imposto;

    std::cin >> salario;

    if (salario >= 0 && salario <= 2000.00)
    {
        std::cout << "Isento\n";
    }
    else if (salario >= 2000.01 && salario <= 3000.00)
    {
        imposto = (salario - 2000.00) * (8.0 / 100.0);
    }
    else if (salario >= 3000.01 && salario <= 4500.00)
    {
        imposto = (salario - 3000.00) * (18.0 / 100.0) + (3000.00 - 2000.01) * (8.0 / 100.0);
    }
    else if (salario >= 4500.01)
    {
        imposto = (salario - 4500.00) * (28.0 / 100.0) + (4500.00 - 3000.01) * (18.0 / 100.0) + (3000.00 - 2000.01) * (8.0 / 100.0);
    }

    if (salario >= 2000.01)
    {
        std::cout << std::setprecision(2) << std::fixed;
        std::cout << "R$ " << imposto << "\n";
    }

    return 0;
}