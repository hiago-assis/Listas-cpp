#include <iostream>
using namespace std;

const int TAM = 8;
bool maioresQuePrimeiro(int v[], int n, int pos);
bool maioresQuePrimeiroV2(int v[], int n);

int main()
{

    int vetor[TAM];

    for (int i = 0; i < TAM; i++)
    {
        cin >> vetor[i];
    }

    if (maioresQuePrimeiro(vetor, TAM, 1))
    {
        cout << "Versao 1: True" << endl;
    }
    else
    {   
        cout << "Versao 1: False" << endl;
    }

    bool result = maioresQuePrimeiroV2(vetor, TAM);
    
     if (result)
    {
        cout << "Versao 2: True";
    }
    else
    {   
        cout << "Versao 2: False";
    }

    

    return 0;
}

bool maioresQuePrimeiro(int v[], int n, int pos)
{

    if (pos == n)
    {
        return true;
    }

    if (v[0] >= v[pos])
    {
        return false;
    }

   return maioresQuePrimeiro(v, n, pos + 1);
}


bool maioresQuePrimeiroV2(int v[], int n)
{

    if (n == 1)
    {
        return true;
    }

    if (v[0] >= v[n - 1])
    {
        return false;
    }

    return maioresQuePrimeiroV2(v, n - 1);
}