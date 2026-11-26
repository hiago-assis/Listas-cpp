#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct Passagem
{
    int codigo;
    string destino;
    float valor;
};

Passagem *maiorValor (Passagem *p, int tamanho);

int main()
{

    int n;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    Passagem *p = (Passagem*) malloc(n * sizeof(Passagem)); 

    for (int i = 0; i < n; i++)
    {
        cout << "Digite o codigo: ";
        cin >> (p + i)->codigo;

         cout << "Digite o destino: ";
        cin >> (p + i)->destino;

         cout << "Digite o valor: ";
        cin >> (p + i)->valor;
    }

    Passagem *maior = maiorValor(p, n);

    cout << maior->codigo << endl;
    cout << maior->destino << endl;
    cout << maior->valor;

    free(p);

    return 0;
}

Passagem *maiorValor(Passagem *p, int tamanho){
    Passagem *maiorAtual = p;

    for(int i = 0; i < tamanho;i++){
        if((p + i)->valor > maiorAtual->valor){
            maiorAtual = (p + i);
        }
    }

    return maiorAtual;

}

// Fiz com malloc por causa do enunciado, mas ao testar o código dá um comportamento inesperado mesmo estando tudo correto.
//Pelo que pesquisei aqui String só funciona com new.