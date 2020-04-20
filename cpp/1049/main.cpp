#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string grupo1, grupo2, grupo3;
    std::string result;

    std::cin >> grupo1;
    std::cin >> grupo2;
    std::cin >> grupo3;

    if (grupo1.compare("vertebrado") == 0)
    {
        if (grupo2.compare("ave") == 0)
        {
            if (grupo3.compare("carnivoro") == 0)
            {
                result = "aguia";
            }
            else if (grupo3.compare("onivoro") == 0)
            {
                result = "pomba";
            }
        }
        else if (grupo2.compare("mamifero") == 0)
        {
            if (grupo3.compare("onivoro") == 0)
            {
                result = "homem";
            }
            else if (grupo3.compare("herbivoro") == 0)
            {
                result = "vaca";
            }
        }
    }
    else if (grupo1.compare("invertebrado") == 0)
    {
        if (grupo2.compare("inseto") == 0)
        {
            if (grupo3.compare("hematofago") == 0)
            {
                result = "pulga";
            }
            else if (grupo3.compare("herbivoro") == 0)
            {
                result = "lagarta";
            }
        }
        else if (grupo2.compare("anelideo") == 0)
        {
            if (grupo3.compare("hematofago") == 0)
            {
                result = "sanguessuga";
            }
            else if (grupo3.compare("onivoro") == 0)
            {
                result = "minhoca";
            }
        }
    }

    std::cout << result << "\n";

    return 0;
}