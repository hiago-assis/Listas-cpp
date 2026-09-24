#include <iostream>
using namespace std;

int main()
{

    int valorAtual;
    int valorAnterior = 0;
    int contadorAtual = 1;
    int contador = 1;

    for (int i = 0; i < 12; i++)
    {

        cin >> valorAtual;

        if (i == 0)
        {
            valorAnterior = valorAtual;
            continue;
        }

        if (valorAtual == valorAnterior)
        {
            contadorAtual++;
        }

        if (contadorAtual > contador)
        {
            contador = contadorAtual;
        }

        if (valorAtual != valorAnterior)
        {
            contadorAtual = 1;
        }
        valorAnterior = valorAtual;
    }

    cout << "A maior  quantidade de valores iguais digitados consecutivamente: " << contador;

    return 0;
}