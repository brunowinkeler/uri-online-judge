#include <iostream>

int main(int argc, char const *argv[])
{
    int hora_inicial, hora_final;
    int diferenca;

    std::cin >> hora_inicial >> hora_final;

    if(hora_inicial >=0 && hora_inicial <= 23 && hora_final >= 0 && hora_final <= 23)
    {
        diferenca = (hora_final+24) - hora_inicial;
        if (diferenca > 24)
        {
            diferenca -= 24;
        }

        std::cout << "O JOGO DUROU " << diferenca << " HORA(S)\n";
    }
}