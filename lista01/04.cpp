#include <iostream>
#include <iomanip>


// Menu para receber o valor  em reais do usuario
float recebeValor();
// Menu para receber o valor do combustivel
float recebeValorCombustivel();


int main(void)
{
    using std::cout;

    float valor = recebeValor();
    float combustivelPreco = recebeValorCombustivel();
    float proporcaoValorCombustivel = valor / combustivelPreco;

    cout << std::fixed <<std::setprecision(2) 
    << "O valor abestecido foi de RS: " 
    <<  valor 
    << " o valor atual do combustivel eh de "
    << combustivelPreco
    << " e no total voce vai abastecer "
    << proporcaoValorCombustivel
    << " litros ";

    return 0;
}

float recebeValor(){
    using std::cout; using std::cin; using std::endl;
    float valor{};
    cout << "informe o valor em RS: " << endl;
    cin >> valor;

    return valor;
}

float recebeValorCombustivel(){
    using std::cout; using std::cin; using std::endl;

    float valorCombustivel{};
    cout << "informe o valor atual do combustivel: " << endl;
    cin >> valorCombustivel;

    return valorCombustivel;
}