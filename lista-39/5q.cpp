#include <iostream>
#include <string>
using namespace std;

const int TAM = 5;

struct Funcionario
{
    int matricula;
    string nome;
    float salario;
};

void reajuste(Funcionario f[], int qntd);

int main()
{
    Funcionario f[TAM];

    for (int i = 0; i < TAM; i++)
    {
        cout << "Digite a matricula do funcionario " << i + 1 << ": ";
        cin >> f[i].matricula;

        cout << "Digite o nome do funcionario " << i + 1 << ": ";
        cin >> f[i].nome;

        cout << "Digite o salario do funcionario " << i + 1 << ": ";
        cin >> f[i].salario;
    }

    reajuste(f, TAM);

    for (int i = 0; i < TAM; i++)
    {
        cout << "Matricula: " << f[i].matricula << endl;
        cout << "Nome: " << f[i].nome << endl;
        cout << "Salario: R$ " << f[i].salario << endl;
    }

    cout << endl;
    return 0;
}

void reajuste(Funcionario f[], int qntd)
{

    float calculoReajuste;

    for (int i = 0; i < qntd; i++)
    {
        if (f[i].salario < 2000)
        {
            calculoReajuste = f[i].salario * 0.10;
            f[i].salario += calculoReajuste;
        }
    }
}