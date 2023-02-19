#include <iostream>

// converte idade em segundos
int converteIdade(int idade){
    long long int idadeSegundos = (365*24*60*60*idade);
    return idadeSegundos;
    
}

int main(void)
{
    using std::cin; using std::cout;using std::endl;
    int idade{};

    cout << "informe sua idade em anos: " << endl;
    cin >> idade;

    cout << "Sua idade em segundos eh: " << converteIdade(idade);

    return 0;
}
