#include <iostream>
using namespace std;

int main()
{

    int numAtual;
    int numAnterior;
    bool primeiroNum = true;
    int contador = 0;

    do
    {

        cout << "Digite um numero inteiro ";
        cin >> numAtual;

        if (numAtual == 0)
        {
            break;
        }

        if (primeiroNum)
        {
            numAnterior = numAtual;
            primeiroNum = false;
            continue;
        }

        if (numAtual > 0 && numAnterior < 0)
        {
            contador++;
        }

        if (numAtual < 0 && numAnterior > 0)
        {
            contador++;
        }

        numAnterior = numAtual;

    } while (numAtual != 0);

    cout << contador;
}