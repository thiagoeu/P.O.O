#include <iostream>

int main(void)
{
    using std::cout; using std::cin; using std::endl;

    float temperaturaCelcios = 0;

    std::cout << "Insira a temperatura em Celcios: ";
    std::cin >> temperaturaCelcios;

    float celsioToFahren = temperaturaCelcios * (9/5) + 32;
    std::cout << "Apos conversao para Fahrenheit: " << celsioToFahren ;

    return 0;
}
