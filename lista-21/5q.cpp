#include <iostream>
using namespace std;

int main()
{
    int num;
    bool numeroEspecial = false;
    int qntd = 0;
    int algarismo;
    int soma = 0;
    int numCopia;

    cout << "Digite um numero(Numero Positivo): ";
    cin >> num;

    while (num <= 0)
    {
        cout << "Numero incorreto, digite novamente(Numero Positivo):";
        cin >> num;
    }

    numCopia = num;

    while (numCopia > 0)
    {
        algarismo = numCopia % 10; // Pega o último algarismo
        soma += algarismo;         // soma algarismo
        numCopia = numCopia / 10;  // retira algarismo
    }

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            qntd++;
        }
    }

    if (soma == qntd)
    {
        numeroEspecial = true;
    }

    if (numeroEspecial)
    {
        cout << "Numero e especial" << endl;
        cout << "Quantidade de divisores e: " << qntd;
    }
    else
    {
        cout << "Numero nao e especial" << endl;
        cout << "Quantidade de divisores e: " << qntd;
    }

    return 0;
}