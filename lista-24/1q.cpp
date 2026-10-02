#include <iostream>
using namespace std;

void imprimirOrdemCrescente(int N);

int main()
{

    int num;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    imprimirOrdemCrescente(num);
}

void imprimirOrdemCrescente(int N)
{
    if (N < 1)
    {
        return;
    }

    imprimirOrdemCrescente(N - 1);

    cout << N << " ";
}