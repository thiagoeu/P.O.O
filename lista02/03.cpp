#include <iostream>
#include <string>
#include <iomanip>

using std::string;


void recebeNotas (float* nota1,float* nota2, float* nota3);
float calculaMedia(float nota1, float nota2, float nota3);
string recebeNome();
char verificaConceito(float media);
void imprimeResultado (string name, float nota1, float nota2, float nota3, float media, char conceito);



int main(void)
{
    
    float nota1 = 0.0; float nota2 = 0.0; float nota3 = 0.0;
    string nome = recebeNome();
    recebeNotas(&nota1,&nota2,&nota3);
    float media = calculaMedia(nota1,nota2,nota3);
    char conceito = verificaConceito(media);

    imprimeResultado(nome,nota1,nota2,nota3,media,conceito);

    return 0;
}

string recebeNome(){
    using std::cout; using std::cin; using std::endl; using std::string;
    string nome = "";

    cout << "Insira seu nome: " << endl;
    getline(cin,nome);

    return nome;

}
float calculaMedia(float nota1, float nota2, float nota3){
    float mediaFinal = (nota1 + nota2 + nota3) / 3;
    return mediaFinal;

}
char verificaConceito(float media){
    char conceito = ' ';
    
    if (media >= 80){
        conceito = 'A';
    } else if( media < 80 && media >= 50){
        conceito = 'B';
    }else{
        conceito = 'C';
    }

    return conceito;
}
void recebeNotas (float* nota1, float* nota2, float* nota3){
    using std::cout; using std::cin;using std::endl;

     for (int i = 0; i < 3; i++)
    {
        cout <<  "insira a nota " << i+1 << endl;
        if (i == 0 ){
            cin >> *nota1;
        }else if (i == 1){
            cin >> *nota2;
        }else{
            cin >> *nota3;
        }
        

    }

}
void imprimeResultado (string name, float nota1, float nota2, float nota3, float media, char conceito) {
    using std::cout;
    
    cout << std::fixed << std::setprecision(2) 
    <<"Ola " << name
    << " suas notas foram "  << nota1 << " " << nota2 << " " << nota3
    << " sua  foi " << media
    << " seu conceito foi " << conceito ; 
}

