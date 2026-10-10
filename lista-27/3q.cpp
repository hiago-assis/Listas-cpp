#include <iostream>
using namespace std;

const int TAM = 5;
int segundoMaior(int v[], int tamanho, int pos, int maiorNum,int segundo);

int main()
{
    int vetor[TAM];
    int res;

    for (int i = 0; i < TAM; i++)
    {
        cin >> vetor[i];
    }

    res = segundoMaior(vetor, TAM, 1,vetor[0],0);

    if(res == 0){
        cout << "Nao tem segundo maior valor";
    }else{
        cout << "O segundo maior valor disitinto do vetor e: " << res;
    }
}

int segundoMaior(int v[], int tamanho, int pos,int maiorNum, int segundo)
{
    if (pos == tamanho)
    {
        return segundo;
    }
    
    
    if(v[pos] > maiorNum){
        segundo = maiorNum;
        maiorNum = v[pos];
    }
   

    if(v[pos] < maiorNum && v[pos] > segundo){
            segundo = v[pos];
    }

    return segundoMaior(v, tamanho, pos + 1, maiorNum, segundo);
}