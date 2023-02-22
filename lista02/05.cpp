#include <iostream>
#include <string>

using std::string;

string recebeNome();
int recebeIdade();
string verificaSeVota(int idade);


int main(void)
{
     using std::cout; using std::cin; using std::endl;
   
    string nome = recebeNome();
    int idade = recebeIdade();

    string eleitor = verificaSeVota(idade);

    cout << nome << " " << idade;

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

string verificaSeVota(idade) {
    
}