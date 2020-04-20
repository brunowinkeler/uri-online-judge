#include <iostream>

int main(int argc, char const *argv[])
{
    double valor;

    std::cin >> valor;
    valor += 0.001;

    int notas100, notas50, notas20, notas10, notas5, notas2;
    int moedas1, moedas05, moedas025, moedas010, moedas005, moedas001;

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

    moedas1 = valor/1;
    valor -= moedas1*1;

    moedas05 = valor/0.5;
    valor -= moedas05*0.5;

    moedas025 = valor/0.25;
    valor -= moedas025*0.25;

    moedas010 = valor/0.10;
    valor -= moedas010*0.10;

    moedas005 = valor/0.05;
    valor -= moedas005*0.05;

    moedas001 = valor/0.01;
    valor -= moedas001*0.01;

    std::cout <<"NOTAS:\n";
    std::cout << notas100  << " nota(s) de R$ 100.00\n";
    std::cout << notas50 << " nota(s) de R$ 50.00\n";
    std::cout << notas20 << " nota(s) de R$ 20.00\n";
    std::cout << notas10 << " nota(s) de R$ 10.00\n";
    std::cout << notas5 << " nota(s) de R$ 5.00\n";
    std::cout << notas2 << " nota(s) de R$ 2.00\n";
    std::cout <<"MOEDAS:\n";
    std::cout << moedas1 << " moeda(s) de R$ 1.00\n";
    std::cout << moedas05 << " moeda(s) de R$ 0.50\n";
    std::cout << moedas025 << " moeda(s) de R$ 0.25\n";
    std::cout << moedas010 << " moeda(s) de R$ 0.10\n";
    std::cout << moedas005 << " moeda(s) de R$ 0.05\n";
    std::cout << moedas001 << " moeda(s) de R$ 0.01\n";

    return 0;
}