#include <iostream>
#include <string>
using namespace std;

struct Produto
{
    int codigo;
    string nome;
    float preco;
};

const int TAM = 5;

int main()
{
    Produto p[TAM];
    Produto aux;

    for (int i = 0; i < TAM; i++)
    {
        cout << "Digite o codigo do produto " << i + 1 << ": ";
        cin >> p[i].codigo;

        cout << "Digite o nome do produto " << i + 1 << ": ";
        cin >> p[i].nome;

        cout << "Digite o preco do produto " << i + 1 << ": ";
        cin >> p[i].preco;
    }

    for (int i = 0; i < TAM; i++)
    {
        for (int j = i + 1; j < TAM; j++)
        {
            if (p[i].preco > p[j].preco)
            {
                aux = p[i];
                p[i] = p[j];
                p[j] = aux;
            }
        }
    }

    cout << endl;

    for (int i = 0; i < TAM; i++)
    {
        cout << "Codigo: " << p[i].codigo << endl;
        cout << "Nome: " << p[i].nome << endl;
        cout << "Preco: R$ " << p[i].preco << endl;
    }

    return 0;
}