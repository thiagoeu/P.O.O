#include <iostream>
#include <string>

using std::string;


float recebeSalario();
string recebeNome();
char conceitoProducao(int qntPecas);
int recebeProducao();
float calculaAumento(float salario, char conceito);
void imprimeResultado(string nome,float salario,int producao,char conceito, float novoSalario);


int main(void)
{

    string nome = recebeNome();
    float salario = recebeSalario();
    int producao = recebeProducao();

    char conceito = conceitoProducao(producao);

    float novoSalario = calculaAumento(salario,conceito);

    imprimeResultado(nome, salario, producao, conceito, novoSalario);

    return 0;
}

float recebeSalario(){
    using std::cout; using std::cin; using std::endl;
    float salario{};

    cout << "Insira o salario para base de calculo: " << endl;
    cin >> salario;

    return salario;
}
string recebeNome(){
    using std::cout; using std::cin; using std::endl;
    string nome{};
    cout << "Insira o seu nome: " << endl;
    getline(cin, nome);

    return nome;
}
int recebeProducao(){
    using std::cout; using std::cin; using std::endl;
    int producao{};

    cout << "Insira a quantidade de pecas produzidas: " << endl;
    cin >> producao;

    return producao;
}
char conceitoProducao (int qntPecas){
    char conceito{};
    if (qntPecas <= 30){
        conceito = 'C';
    }else if (qntPecas > 30 && qntPecas <= 44){
        conceito = 'B';
    }else{
        conceito = 'A';
    }
    return conceito;
    
}
void imprimeResultado(string nome,float salario,int producao,char conceito, float novoSalario){
    std::cout << "Funcionario: " << nome << std::endl;
    std::cout << "Salario Minimo: " << salario << std::endl;
    std::cout << "Numero de pecas Fabricadas: " << producao << std::endl;
    std::cout << "Classe: " << conceito << std::endl;
    std::cout << "Seu novo Salario eh: " << novoSalario << std::endl;
}
float calculaAumento(float salario, char conceito){
    float novoSalario{};
    if (conceito == 'A')
        novoSalario = salario * 0.15 + salario;
    else if (conceito == 'B'){
        novoSalario = salario *0.5 + salario;
    }else{
        novoSalario = salario;
    }

    return novoSalario;
    
}
