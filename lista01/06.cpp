#include <iostream>

float mediaPonderada (float nota1,float nota2,float nota3);
void retornaNotas(float* nota1, float* nota2, float* nota3);

int main(void)
{
    using std::cout; using std::endl;

    float nota1,nota2,nota3;
    retornaNotas(&nota1, &nota2, &nota3);
    float media = mediaPonderada(nota1,nota2,nota3);

    cout << "nota 01: " 
    << nota1 
    << " nota 02: "
    << nota2
    << " nota 03: "
    << nota3
    << " media final: "
    << media 
    << endl;

    return 0;
}

void retornaNotas(float* nota1, float* nota2, float* nota3){
    using std::cout; using std::cin; using std::endl;
    cout << "Insira a nota 1" << endl;
    cin >> *nota1;
    cout << "Insira a nota 2" << endl;
    cin >> *nota2;
    cout << "Insira a nota 3" << endl;
    cin >> *nota3; 
}
float mediaPonderada (float nota1,float nota2,float nota3){    
    float media = ( (nota1 * 0.2) + (nota2 * 0.3) +(nota3 * 0.5) / 1 );
    return media;
}
