#include <iostream>
#include <string>

using namespace std;

//menu para receber o nome do usuario
string recebeNome();

//menu para receber o valor do salario atual e realizar a conversão para o novo valor
float ReajustaSalario();


int main()
{
    string nome = recebeNome();
    float salarioAtualizado = ReajustaSalario();
    cout << "Ola " << nome << " seu novo salario eh de: RS" << salarioAtualizado;
}

string recebeNome(){
    string name;
    cout << "Informe seu nome: " << endl;
    getline (std::cin, name);

    return name;
}

float ReajustaSalario(){
    float salario = 0;
    cout << "Informe seu salario atual, a aplicacao realizara o reajuste e imprimira na tela: " << endl;
    cin >> salario;

    float reajustaSalario = salario * 0.2 + salario;
    return reajustaSalario;
}
