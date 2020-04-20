#include <iostream>

int main(int argc, char const *argv[])
{
    const int dia_em_minutos = 60*24;
    int hr_ini, min_ini, hr_fin, min_fin;
    int hora_ini_min, hora_fin_min;
    int diferenca_minutos;

    std::cin >> hr_ini >> min_ini >> hr_fin >> min_fin;

    if(hr_ini >=0 && hr_ini <= 23 && hr_fin >= 0 && hr_fin <= 23
        && min_ini >= 0 && min_ini <= 59 && min_fin >=0 && min_fin <=59)
    {
        hora_fin_min = hr_fin*60 + min_fin;
        hora_ini_min = hr_ini*60 + min_ini;

        diferenca_minutos = (hora_fin_min+dia_em_minutos) - hora_ini_min;
        if (diferenca_minutos > dia_em_minutos)
        {
            diferenca_minutos -= dia_em_minutos;
        }
        
        std::cout << "O JOGO DUROU " << diferenca_minutos/60 << " HORA(S) E " << diferenca_minutos%60 << " MINUTO(S)\n";
    }
}