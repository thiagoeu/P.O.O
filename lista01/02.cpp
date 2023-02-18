#include <iostream>

float custoDeFabrica();
float custoAposTaxas(float custoInicial);

int main(void)
{
    using std::cout;
    float custoInicial = custoDeFabrica();
    float custoFinal = custoAposTaxas(custoInicial);

    cout    << "O custo inicial do automovel foi de: RS"
            << custoInicial 
            << " custo final do automovel serah de RS"
            <<custoFinal;
    
}

float custoDeFabrica(){
    using std::cin;using std::cout;using std::endl;
    float valorInicial = 0;
    cout << "Insira do custo de fabrica para o automovel: " << endl;
    cin >> valorInicial;
    return valorInicial;
}

float custoAposTaxas(float custoInicial){
    float valorFinal = custoInicial + (custoInicial*0.55);
    return valorFinal;    
}