#include <iostream>
#include <string>


using std::string;

string recebeNome();
float recebeNota();
float comparaNota(float nota, float maxima);
void imprimeResultado(string nome, float maior);

int main(void)
{

    string nome = recebeNome();
    float maxima{};
    
    while(true){
        
        float nota = recebeNota();
        float maior = comparaNota(nota, maxima);
        maxima = maior;

        if (nota == -1){
            imprimeResultado(nome, maior);
            break;
        }
    }   

    return 0;
}


string recebeNome(){
    using std::cin; using std::cout; using std::endl;
    string nome{};
    cout << "Insira o nome do estudante: " << endl;
    getline(cin, nome);

    return nome;
}

float recebeNota(){
    using std::cin; using std::cout; using std::endl;
    float nota{};
    cout << "Insira a nota do estudante: " << endl;
    cin >> nota;
    return nota;
}

float comparaNota(float nota, float maxima){

    if (nota > maxima)
        maxima = nota;

    return maxima;    
}

void imprimeResultado(string nome, float maior){
    std::cout << "O aluno " << nome << " teve como maior nota " << maior;
}