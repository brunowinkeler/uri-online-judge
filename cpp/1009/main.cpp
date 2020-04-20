#include <iostream>
#include <iomanip>
#include <string>

int main(int argc, char const *argv[])
{
    std::string nome;
    double salario;
    double comissao;

    std::cout << std::setprecision(2) << std::fixed;
    std::cin >> nome;
    std::cin >> salario;
    std::cin >> comissao;

    std::cout << "TOTAL = R$ " << salario + (comissao * 0.15) << "\n";

    return 0;
}