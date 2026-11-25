#include <iostream>
#include <string>
using namespace std;

struct Aluno
{
    int matricula;
    string nome;
    float nota;
};

int main(){
    Aluno a;
    Aluno *p = &a;

    cout << "Digite a matricula do aluno: ";
    cin >> p->matricula;

    cout << "Digite o nome do aluno: ";
    cin >> p->nome;

    cout << "Digite a nota do aluno: ";
    cin >> p->nota;

    
    cout << "Matricula: " << p->matricula << endl;
    cout << "Nome: " << p->nome << endl;
    cout << "Nota: " << p->nota;

    return 0;
}