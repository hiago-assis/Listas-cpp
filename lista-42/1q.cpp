#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct Filme
{
    string titulo;
    int ano;
    int duracao;
};

int main(){
    Filme *p = (Filme*) malloc(sizeof(Filme));

    cout << "Digite o titulo do filme: ";
    cin >> p->titulo;

    cout << "Digite o ano de lancamento: ";
    cin >> p->ano;

    cout << "Digite a duracao do filme em minutos: ";
    cin >> p->duracao;

    cout << "Titulo: " << p->titulo << endl;
    cout << "Ano: " << p->ano << endl;
    cout << "Duracao: " << p->duracao << " minutos";

    free(p);

    return 0;
}