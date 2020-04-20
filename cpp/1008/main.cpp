#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    int num_func, num_horas;
    double valor_hora;
    double salario;

    std::cout << std::setprecision(2) << std::fixed;
    std::cin >> num_func;
    std::cin >> num_horas;
    std::cin >> valor_hora;
    salario = num_horas*valor_hora;

    std::cout << "NUMBER = " << num_func << "\n";
    std::cout << "SALARY = U$ " << salario << "\n";

    return 0;
}
