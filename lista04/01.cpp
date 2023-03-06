#include <iostream>
#include <vector>
using std::vector;

int recebeNumero();
void impimeResposta(vector <int> numeros , int soma);



int main(void)
{

    vector <int> numeros;
    int soma{};

    while(true){

        int numero = recebeNumero();
        soma += numero;

        if (numero == 0)
            break;
        numeros.emplace_back(numero);
    }
    
    impimeResposta(numeros, soma);
    
}


int recebeNumero(){
    using std::cin;using std::cout;using std::endl;
    int numero{};

    cout << "Insira o numero: " << endl;
    cin >> numero;

    return numero; 
}

void impimeResposta(vector <int> numeros , int soma){
    
    for (int numero: numeros){
        std::cout << numero << " ";
    }

    std::cout << ", a soma de todos os numeros foi: " << soma << std::endl;

}