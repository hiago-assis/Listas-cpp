#include <iostream>
using namespace std;

void pares(int N);

int main()
{

    int num;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    if (num % 2 == 1)
    {
        num--;
    }

    cout << "A sequencia e: ";
    pares(num);
    return 0;
}

void pares(int N)
{

    if (N < 0)
    {
        return;
    }

    if (N % 2 == 0)
    {

        cout << N << " ";
    }

    pares(N - 1);
}