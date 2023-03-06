#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

struct Aluno {
    string nome;
    double nota1;
    double nota2;
};

// Função para ler as notas de um aluno
void lerNotasAluno(Aluno& aluno) {
    cout << "Nome: ";
    cin >> aluno.nome;
    cout << "Nota 1: ";
    cin >> aluno.nota1;
    cout << "Nota 2: ";
    cin >> aluno.nota2;
    cout << endl;
}

// Função para calcular a média de um aluno
double calcularMediaAluno(const Aluno& aluno) {
    return (aluno.nota1 + aluno.nota2) / 2.0;
}

// Função para imprimir as informações de um aluno
void imprimirAluno(const Aluno& aluno) {
    double media = calcularMediaAluno(aluno);
    cout << "Nome: " << aluno.nome << endl;
    cout << "Media: " << fixed << setprecision(2) << media << endl;
    cout << endl;
}

int main() {
    vector<Aluno> alunos(5);

    // Lê as notas de cada aluno
    for (int i = 0; i < 5; i++) {
        cout << "Aluno " << i+1 << endl;
        lerNotasAluno(alunos[i]);
    }

    // Imprime as informações de cada aluno
    for (int i = 0; i < 5; i++) {
        cout << "Aluno " << i+1 << endl;
        imprimirAluno(alunos[i]);
    }

    return 0;
}