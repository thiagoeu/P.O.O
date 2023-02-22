#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>
using std:: string;


float recebeAltura();
float recebePeso();
string grauIMC(float imc);
void imprimeResultado(float imc, float peso, float altura, string nivelImc);


int main(void)
{
    using std::cout; using std::cin; using std::endl; using std::string;

    float altura = recebeAltura();
    float peso = recebePeso();
    float imc = peso/pow(altura,2);

    string nivelImc = grauIMC(imc);
    
    imprimeResultado(peso,altura,imc,nivelImc);


    return 0;
}


float recebeAltura(){
    using std::cout; using std::cin; using std::endl;
    float altura = 0;
    cout << "Insira sua altura em metros " << endl;
    cin >> altura; 
    // cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
   
    return altura;

}

float recebePeso(){
    using std::cout; using std::cin; using std::endl;

    float peso = 0;
    cout << "Insira sua peso em kg " << endl;
    cin >> peso;
    return peso;
}

string grauIMC(float imc){
    string nivel = "";
    
    if (imc < 18.5){
        nivel = "Voce esta abaixo do seu peso ideal";
    }else if ( imc >= 18.5 && imc <= 24.9){
       nivel = "Parabens! Voce esta no seu peso ideal!";
    }else if (imc >= 25 && imc <= 29.9){
       nivel = "Voce esta acima do seu peso (sobrepeso)";
    } else if(imc >= 30 && imc <= 34.9){
        nivel = "Obesidade grau I";
    }else if(imc >= 35 && imc <= 39.9){
        nivel = "Obesidade grau II";
    }else{
        nivel = "Obesidade grau III";
    }
    
    return nivel;
    
}

void imprimeResultado(float peso, float altura,float imc, string nivelImc) {
    using std::cout; using std::cin; using std::endl; using std::string;
    cout << std::fixed << std::setprecision(2)
    << "Seu Peso eh " << peso 
    << " Sua Altura eh " << altura
    << '\n'
    << "seu imc eh "<< imc
    << " seu graude de imc eh " << nivelImc;
}