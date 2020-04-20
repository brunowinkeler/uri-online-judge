#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    int mes;
    std::string meses[12] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
        };

    std::cin >> mes;

    if (mes >= 1 && mes <= 12)
    {
        std::cout << meses[mes-1] << '\n';
    }

    return 0;
}