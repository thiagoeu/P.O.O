#include <iostream>
#include <vector>
#include <numeric>


using std::vector;

int recebeNumero();
void impimeResposta(vector <int> numeros);



int main(void)
{

    vector <int> numeros;
    int soma{};

    while(true){
        
        int numero = recebeNumero();
        soma += numero;
        if (numero == 0){
            break;
        }
        numeros.emplace_back(numero);

    }

    impimeResposta(numeros);
    
}


int recebeNumero(){
    using std::cin;using std::cout;using std::endl;
    int numero{};

    cout << "Insira o numero: " << endl;
    cin >> numero;

    return numero; 
}

void impimeResposta(vector <int> numeros ){
    int sum_of_elems = std::accumulate(numeros.begin(), numeros.end(), 0);
    for (int numero: numeros){
        std::cout << numero << " ";
    }

    std::cout << ", a soma de todos os numeros foi: " << sum_of_elems << std::endl;

}