#include <iostream>

int main(int argc, char const *argv[])
{
    int tempo_segundos;
    int horas, minutos, segundos;

    std::cin >> tempo_segundos;

    horas = tempo_segundos/3600;
    tempo_segundos %= 3600;

    minutos = tempo_segundos/60;
    tempo_segundos %= 60;

    segundos = tempo_segundos;

    std::cout << horas << ":" << minutos << ":" << segundos << "\n";

    return 0;
}