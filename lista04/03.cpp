#include <iostream>
#include <vector>
#include <numeric>

using std::vector;

float recebeNumero();
void impimeResposta(vector <float> numeros);

int main(void)
{

    vector <float> numeros;

    while(true){

        float numero = recebeNumero();

        if (numero == 0){
            break;
        }
        numeros.emplace_back(numero);

    }

    impimeResposta(numeros);

    return 0;
    
}


float recebeNumero(){
    using std::cin;using std::cout;using std::endl;
    int numero{};

    cout << "Insira a nota: " << endl;
    cin >> numero;

    return numero; 
}

void impimeResposta(vector <float> numeros ){
    float sum_of_elems = std::accumulate(numeros.begin(), numeros.end(), 0);
    float media = sum_of_elems/numeros.size();
    vector <float> maiorQueAMedia;
    
    for (float numero: numeros){
        if (numero > media){
            maiorQueAMedia.emplace_back(numero);
        }
        
    }

    std::cout << "a media eh: " << media << std::endl;
    std::cout << "a  lista de notas maiores que a media eh: "<< std::endl;
    
    for(float numero: maiorQueAMedia){
        std::cout << numero << " ";

    }
    
}