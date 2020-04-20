#include <iostream>
#include <cstdlib>

int main(int argc, char const *argv[])
{
    int a,b,c;
    int maior_ab, maior_ab_c;

    std::cin >> a >> b >> c;

    maior_ab = (a+b+(std::abs(a-b)))/2;
    maior_ab_c = (maior_ab+c+(std::abs(maior_ab-c)))/2;

    std::cout << maior_ab_c << " eh o maior\n";

    return 0;
}