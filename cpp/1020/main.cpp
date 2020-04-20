#include <iostream>

int main(int argc, char const *argv[])
{
    int idade_dias;
    int anos, meses, dias;

    std::cin >> idade_dias;

    anos = idade_dias/365;
    idade_dias %= 365;

    meses = idade_dias/30;
    idade_dias %= 30;

    dias = idade_dias;

    std::cout << anos << " ano(s)\n";
    std::cout << meses << " mes(es)\n";
    std::cout << dias << " dia(s)\n";

    return 0;
}