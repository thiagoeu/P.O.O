#include <iostream>
#include <string>
#include <vector>
#include <limits>

using std::string; using std::vector;

string recebeNome();
float receNotasCalculaMedia();

int main(void){

    vector <string> alunos;
    vector <float> notas;
    
   // recebe dados de 5 alunos. 
   for (int i = 0; i < 5; i++){
        string nome = recebeNome();
        float media = receNotasCalculaMedia();
        alunos.push_back(nome);
        notas.push_back(media);
    }
    
    // imprime a lista de alunos.
    int i = 0;
    for (string nome: alunos){
        std::cout << "O Aluno: " << nome << " teve como media: " << notas[i] << '\n';
        i++;
    }

    return 0;
}

string recebeNome(){
    using std::cout; using std::cin; using std::endl;
    string nome{};
    cout << "Insira o seu nome: " << endl;
    getline(cin, nome);

    return nome;
}
float receNotasCalculaMedia(){
    using std::cout; using std::cin; using std::endl;
    float nota1{},nota2{};
    for (int i = 0; i < 2; i++)
    {
        cout << "Insira a nota " << i+1 << endl;
        if (i == 0)
        {
            cin >> nota1;
        }
        else if (i == 1)
        {
            cin >> nota2;
        }
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
        
    }
    float media = (nota1 + nota2)/2;
    return media;
}
