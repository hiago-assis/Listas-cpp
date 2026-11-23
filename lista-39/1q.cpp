#include <iostream>
#include <string>
using namespace std;

struct Aluno
{
    int matricula;
    string nome;
    float nota;
};

const int TAM = 6;

int main()
{

    Aluno a[TAM];
    int matricula;

    for (int i = 0; i < TAM; i++)
    {
        cout << "Digite a matricula do aluno " << i + 1 << ": ";
        cin >> a[i].matricula;

        cout << "Digite o nome do aluno " << i + 1 << ": ";
        cin >> a[i].nome;

        cout << "Digite a nota do aluno " << i + 1 << ": ";
        cin >> a[i].nota;
    }

    cout << "Digite a matricula do aluno a ser pesquisado: ";
    cin >> matricula;

    for (int i = 0; i < TAM; i++)
    {
        if (matricula == a[i].matricula)
        {
            cout << a[i].nome << endl;
            cout << a[i].nota;
            break;
        }
        else if (i == TAM - 1 && a[i].matricula != matricula)
        {
            cout << "Nao encontrado";
        }
    }
}