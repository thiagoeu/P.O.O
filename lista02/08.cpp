#include <iostream>
#include <string>

float recebeSalarioBruto();
int recebeDependentes();


int main(void)
{
    using std::cout; using std::cin; using std::endl; using std::string;

    float salarioBruto = recebeSalarioBruto();
    float descontoInss = salarioBruto * 0.075;

    int dependentes = recebeDependentes();


    cout << salarioBruto << " " << descontoInss << " " << dependentes; 
    return 0;
}

float recebeSalarioBruto(){
    using std::cout; using std::cin; using std::endl; using std::string;
    float salarioBruto{};
    cout <<  "Entre com o valor bruto do salario: " << endl;
    cin >> salarioBruto;

    return salarioBruto;
}

int recebeDependentes(){
    using std::cout; using std::cin; using std::endl; using std::string;
    int dependentes{};
    cout << "Insira o numero de dependentes: " << endl;
    cin >> dependentes;

    return dependentes;
}