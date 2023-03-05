#include <iostream>
#include <string>

using std::string;

string recebeNome();
float recebeSalarioAtual();
float taxaDeAumento(float salarioAtual);
void imprimeSaida(string nome, float salarioAtual, float taxa, float salarioPosAumento);

int main(void)
{
    string nome = recebeNome();
    float salarioAtual = recebeSalarioAtual();

    float taxa = taxaDeAumento(salarioAtual);
    float salarioPosAumento = salarioAtual * taxa + salarioAtual;
    imprimeSaida(nome, salarioAtual, taxa, salarioPosAumento);

    return 0;
}

string recebeNome(){
    using std::cout; using std::cin; using std::endl;
    string nome{};
    cout << "Insira o seu nome: " << endl;
    getline(cin, nome);

    return nome;
}

float recebeSalarioAtual(){
    using std::cout; using std::cin; using std::endl;
    float salario{};
    cout << "Insira o seu salario atual: " << endl;
    cin >> salario;
    return salario;

}

float taxaDeAumento(float salarioAtual){
    float taxa {};
    if (salarioAtual <= 1000){
        taxa = 0.3;
    }else if (salarioAtual > 1000 && salarioAtual <= 1500){
        taxa = 0.2;
    }else if (salarioAtual > 1500 && salarioAtual <= 2000){
        taxa = 0.15;
    }else if (salarioAtual > 2000 && salarioAtual <= 2500){
        taxa = 0.10;
    }else{
        taxa =  0.05;
    }
    
    return taxa;
    
}

void imprimeSaida(string nome, float salarioAtual, float taxa, float salarioPosAumento){
    std::cout << "Ola, " << nome 
    <<  " seu salario atual eh de " << salarioAtual
    << " a taxa de aumento para seu de salario eh de: " << taxa *100  << "%."
    << " O valor final do seu novo salario eh de: " << salarioPosAumento;

}