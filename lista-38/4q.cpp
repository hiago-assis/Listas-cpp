#include <iostream>
#include <string>
using namespace std;

struct Pessoa
{
    string nome;
    int idade;
};

const int TAM = 3;

int main()
{
    Pessoa pessoas[TAM];
    int maior = 0;

    for (int i = 0; i < TAM; i++)
    {
        cout << "Digite o nome da pessoa " << i + 1 << ": ";
        cin >> pessoas[i].nome;

        cout << "Digite a idade da pessoa " << i + 1 << ": ";
        cin >> pessoas[i].idade;
    }

    
    for (int i = 1; i < TAM; i++)
    {
        if (pessoas[i].idade > pessoas[maior].idade)
        {
            maior = i;
        }
    }

    cout << "Pessoa mais velha:" << endl;
    cout << "Nome: " << pessoas[maior].nome << endl;
    cout << "Idade: " << pessoas[maior].idade << endl;

    return 0;
}