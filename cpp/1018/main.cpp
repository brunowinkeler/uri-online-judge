#include <iostream>

int main(int argc, char const *argv[])
{
    unsigned int valor;
    unsigned int notas100, notas50, notas20, notas10, notas5, notas2, notas1;
    
    std::cin >> valor;

    notas100 = valor/100;
    valor -= notas100*100;

    notas50 = valor/50;
    valor -= notas50*50;

    notas20 = valor/20;
    valor -= notas20*20;

    notas10 = valor/10;
    valor -= notas10*10;

    notas5 = valor/5;
    valor -= notas5*5;

    notas2 = valor/2;
    valor -= notas2*2;

    notas1 = valor/1;
    valor -= notas1*1;

    std::cout << notas100 << " nota(s) de R$ 100,00\n";
    std::cout << notas50 << " nota(s) de R$ 50,00\n";
    std::cout << notas20 << " nota(s) de R$ 20,00\n";
    std::cout << notas10 << " nota(s) de R$ 10,00\n";
    std::cout << notas5 << " nota(s) de R$ 5,00\n";
    std::cout << notas2 << " nota(s) de R$ 2,00\n";
    std::cout << notas1 << " nota(s) de R$ 1,00\n";
    std::cout << valor << "\n";

    return 0;
}