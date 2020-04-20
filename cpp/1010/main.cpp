#include <iostream>
#include <iomanip>
#include <string>

struct item
{
    int codigo;
    int numero_de_pecas;
    double valor_unitario;
};

int main(int argc, char const *argv[])
{
    item it1,it2;
    double total;

    std::cin >> it1.codigo >> it1.numero_de_pecas >> it1.valor_unitario;
    std::cin >> it2.codigo >> it2.numero_de_pecas >> it2.valor_unitario;

    total = (it1.numero_de_pecas*it1.valor_unitario) + (it2.numero_de_pecas*it2.valor_unitario);

    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "VALOR A PAGAR: R$ " << total << "\n";

    return 0;
}