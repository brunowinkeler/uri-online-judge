#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    const int DIA_SEGUNDOS = 24 * 60 * 60;
    const int HRA_SEGUNDOS = 60 * 60;
    const int MIN_SEGUNDOS = 60;

    // Definicao de variaveis
    std::string aux;
    int dia_ini, dia_fin;
    int hra_ini, hra_fin;
    int min_ini, min_fin;
    int seg_ini, seg_fin;

    int tempo_final_segundos, tempo_inici_segundos;
    int diferenca_segundos;
    int dia, hra, min, seg;

    // Obtendo as entradas
    std::cin >> aux >> dia_ini;
    std::cin >> hra_ini >> aux >> min_ini >> aux >> seg_ini;

    std::cin >> aux >> dia_fin;
    std::cin >> hra_fin >> aux >> min_fin >> aux >> seg_fin;

    // Colocando tudo em segundos
    tempo_final_segundos = dia_fin * DIA_SEGUNDOS +
                           hra_fin * HRA_SEGUNDOS +
                           min_fin * MIN_SEGUNDOS +
                           seg_fin;

    tempo_inici_segundos = dia_ini * DIA_SEGUNDOS +
                           hra_ini * HRA_SEGUNDOS +
                           min_ini * MIN_SEGUNDOS +
                           seg_ini;

    diferenca_segundos = tempo_final_segundos - tempo_inici_segundos;

    dia = diferenca_segundos / DIA_SEGUNDOS;
    diferenca_segundos = diferenca_segundos - (dia * DIA_SEGUNDOS);
    hra = diferenca_segundos / HRA_SEGUNDOS;
    diferenca_segundos = diferenca_segundos - (hra * HRA_SEGUNDOS);
    min = diferenca_segundos / MIN_SEGUNDOS;
    diferenca_segundos = diferenca_segundos - (min * MIN_SEGUNDOS);
    seg = diferenca_segundos;

    std::cout << dia << " dia(s)\n"
              << hra << " hora(s)\n"
              << min << " minuto(s)\n"
              << seg << " segundo(s)\n";

    return 0;
}