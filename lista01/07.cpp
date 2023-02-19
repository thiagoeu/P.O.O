#include <iostream>
#include <string>
#include <limits>
#include <iomanip>


void armazenaDadosFuncionario(int* matricula,std::string* nome, float* salarioBruto);

int main(void)
{
    std::string nome;
    int matricula;
    float salarioBruto;

    armazenaDadosFuncionario(&matricula,&nome,&salarioBruto);

    float descontoInss = salarioBruto * 0.15;
    float salarioLiquido = salarioBruto - descontoInss;

    std::cout << std::fixed << std::setprecision(2) 
    <<"Matricula: :" << matricula << '\n'
    << "Nome Completo: " << nome << '\n'
    << "Salario Bruto: " << salarioBruto << '\n'
    << "Desonto INSS: " << descontoInss << '\n'
    << "Salario Liquido: " << salarioLiquido << std::endl;
    
    return 0;
}

void armazenaDadosFuncionario(int* matricula,std::string* nome, float* salarioBruto ){

    using std::cout; using std::cin; using std::endl;

    cout << "insira sua matricula: " << endl;
    cin >> *matricula;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    cout << "insira seu nome: " << endl;
    std::getline(cin, *nome);
    cout << "Digite seu salario bruto: " << endl;
    cin >> *salarioBruto;
}