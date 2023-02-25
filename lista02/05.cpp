#include <iostream>
#include <string>

using std::string;

string recebeNome();
int recebeIdade();
string verificaSeVota(int idade);
void imprimeResultado(string nome, int idade, string eleitor);

int main(void)
{  
    string nome = recebeNome();
    int idade = recebeIdade();
    string eleitor = verificaSeVota(idade);

    imprimeResultado(nome, idade, eleitor);
    return 0;
} 

string recebeNome(){
    using std::cout; using std::cin; using std::endl;
    string nome = "";
    cout << "Informe seu nome " << endl;
    getline(cin, nome);
    return nome;
}

int recebeIdade(){
    using std::cout; using std::cin; using std::endl;
    int idade = 0;
    cout << "Informe sua idade " << endl;
    cin >> idade;
    return idade;
}

string verificaSeVota(int idade) {
    if(idade < 16){
        return "Nao eleitor";
    }else if (idade >= 18 && idade <= 65){
        return "Voto Obrigatorio";
    }
    return "Voto Facultativo";
       
}

void imprimeResultado(string nome, int idade, string eleitor){
    using std::cout; using std::cin; using std::endl;
    cout << nome << " tem: " << idade << " anos " << " " << eleitor;
}