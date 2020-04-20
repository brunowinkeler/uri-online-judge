#include <iostream>
#include <iomanip>

const double AUTONOMIA = 12.0; // km/L

int main(int argc, char const *argv[])
{
    int tempo_viagem, velocidade_media;

    std::cin >> tempo_viagem;
    std::cin >> velocidade_media;

    std::cout << std::setprecision(3) << std::fixed;
    std::cout << (tempo_viagem * velocidade_media)/AUTONOMIA << "\n";

    return 0;
}