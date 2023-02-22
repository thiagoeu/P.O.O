#include <iostream>
#include <string>



float leEntrada();
std::string comparaNumero(float numero);

int main(void)
{
    using std::cout;
    float number = leEntrada();
    cout << number << " " << comparaNumero(number);
    return 0;
}

float leEntrada() {

    using std::cout; using std::cin; using std::endl;
    float numero{};
    cout << "Digite um numero: " << endl;
    cin >> numero;

    return numero;
}
std::string comparaNumero(float numero) {
    
    if (numero > 0) {
        return "eh maior que zero";
    } else if (numero == 0) {
        return "eh igual a zero";
    }else{
        return "eh menor que zero";
    }
    
}