#include <iostream>
#include <string>
using namespace std;

struct Livro
{
    int codigo;
    string titulo;
    int ano;
};

const int TAM = 6;

int main()
{
    Livro l[TAM];
    int qntd = 0;
    int anoProcurado;

    for (int i = 0; i < TAM; i++)
    {
        cout << "\nDigite o codigo do livro " << i + 1 << ": ";
        cin >> l[i].codigo;

        cout << "Digite o titulo do livro " << i + 1 << ": ";
        cin >> l[i].titulo;

        cout << "Digite o ano de publicacao do livro " << i + 1 << ": ";
        cin >> l[i].ano;
    }

    cout << "Digite o ano a partir do qual deseja pesquisar: ";
    cin >> anoProcurado;

    cout << "Livros publicados a partir de " << anoProcurado << endl;

    for (int i = 0; i < TAM; i++)
    {
        if (l[i].ano >= anoProcurado)
        {
            cout << "Codigo: " << l[i].codigo << endl;
            cout << "Titulo: " << l[i].titulo << endl;
            cout << "Ano de publicacao: " << l[i].ano << endl;

            qntd++;
        }
    }

    cout << "Quantidade de livros que atenderam ao criterio: " << qntd << endl;

    return 0;
}