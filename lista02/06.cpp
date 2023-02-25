#include <iostream>
#include <string>
#include <iomanip>

using std::string;

string recebeNome();
float consumoMensal();
float calculaTaxa(float consumoMes);
void imprimeSaida(string nome, float consumoMes, float taxa,float totalFatura);

int main(void)
{
    string nome = recebeNome();
    float consumoMes = consumoMensal();

    float taxa = calculaTaxa(consumoMes);
    float totalFatura = consumoMes * taxa;

    imprimeSaida(nome, consumoMes, taxa, totalFatura);
   
    return 0;
}

string recebeNome(){
    using std::cout; using std::cin; using std::endl;
    string nome = " ";
    cout << "Insira o seu nome: " << endl;
    getline(cin, nome);
    return nome;
}

float consumoMensal(){
    using std::cout; using std::cin; using std::endl;
    float consumo = 0.0;
    cout << "Insira o seu consumo mensal em kw/h: " << endl;
    cin >> consumo;
    return consumo;
}

float calculaTaxa(float consumoMes) {
    if (consumoMes >= 300){
        return 1.0;
    }
    else if ( consumoMes  >= 200 && consumoMes < 300){
        return 0.80;  
    }
    return 0.20;   
}

void imprimeSaida(string nome, float consumoMes, float taxa,float totalFatura){
    std::cout << std::fixed << std::setprecision(2)
    << "Consumidor: "<< nome << '\n'
    << "Consumo Mensal: " << consumoMes << '\n'
    << "Preco do kw/h em RS: " << taxa 
    <<" Total a pagar RS: " << totalFatura;
}