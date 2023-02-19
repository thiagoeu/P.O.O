#include <iostream>
#include <cmath>

int recebeValor();
int recebePotencia();

int main(void)
{
    
    long long valor = recebeValor();
    int potencia = recebePotencia();
    int resultado = pow(valor,potencia);
    
    std::cout << "valor final "
    << resultado;

    return 0;
}

int recebeValor(){
    using std::cout; using std::cin; using std::endl;
    int valor{};
    cout << "Informe um valor " << endl;
    cin >> valor;
    return valor;
}

int recebePotencia(){
    using std::cout; using std::cin; using std::endl;
    int valor{};
    cout << "Informe uma potencia  " << endl;
    cin >> valor;
    return valor;   
}