#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    string nome;
    int idade;
    float nota;
};

int main(){

    Aluno a;

    cout << "Digite o nome do aluno: ";
    cin >> a.nome;

    cout << "Digite a idade do aluno: ";
    cin >> a.idade;
    
    cout << "Digite a nota do aluno: ";
    cin >> a.nota;


    cout << a.nome << endl;
    cout << a.idade << endl;
    cout << a.nota;
}