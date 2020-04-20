#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    int a,b,c,d;
    int diferenca;

    std::cout << std::setprecision(1) << std::fixed;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    diferenca = (a*b) - (c*d);

    std::cout << "DIFERENCA = " << diferenca << "\n";

    return 0;
}
