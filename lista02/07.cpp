#include <iostream>
#include <string>
#include <limits>

using std::string;

void recebeNumeros(float* num1, float* num2, float* num3);
float verificaMaiorNumero(float num1,float num2, float num3);
void todosIguais();
void imprimeResultado(float num1, float num2, float num3, float maiorNumero);


int main(void){ 
    float num1 = 0.0; float num2 = 0.0; float num3 = 0.0;
    recebeNumeros(&num1, &num2, &num3);
    float maiorNumero = verificaMaiorNumero(num1, num2, num3);
    imprimeResultado(num1, num2, num3, maiorNumero);
    return 0;
}

void recebeNumeros(float* num1, float* num2, float* num3){
    using std::cout; using std::cin; using std::endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "digite o numero " << i+1 << endl;
        if (i == 0){
            cin >> *num1;
        }else if (i == 1){
            cin >> *num2;
        }else{
            cin >> *num3;
        }
            
    }
    
}

float verificaMaiorNumero(float num1, float num2, float num3){
    float maior = num1;

    if (num1 > num2 && num1 > num3){
        return maior;
    } else if ( (num2 > num1 && num2 > num3) || (num1 == num3 && num2 > num1) ){
        maior = num2;
    }else if (num1 == num2 && num1 == num3){
        todosIguais();   
    }else{
        maior = num3;
    }

    return maior;
}

void todosIguais(){
    std::cout << "todos os numeros sao iguais";
}

void imprimeResultado(float num1, float num2, float num3, float maiorNumero){
    using std::cout; using std::cin; using std::endl;
    cout << "Numero 1: " << num1 << '\n'
    <<"Numero 2: " << num2 << '\n'
    << "Numero 3: " <<num3 << '\n'
    << "Resultado Maior Numero:  " << maiorNumero;
}