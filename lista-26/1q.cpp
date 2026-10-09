#include <iostream>
using namespace std;

const int TAM = 6;
int mudancaSinal(int v[], int tamanho, int pos);


int main()
{

    int vetor[TAM];
    int num;

    for (int i = 0; i < TAM; i++)
    {
        cout << "Digite um numero inteiro diferente de 0: ";
        cin >> num;
        while (num == 0)
        {
            cout << "Numero invalido digite novamente: ";
            cin >> num;
        }

        vetor[i] = num;
    }

    cout << mudancaSinal(vetor, TAM, 0);

   

    return 0;
}


int mudancaSinal(int v[], int tamanho, int pos){
    if(pos == tamanho - 1){
        return 0;
    }

    if((v[pos] > 0 &&  v[pos + 1] < 0) || (v[pos] < 0 &&  v[pos + 1] > 0) ){
        return 1 + mudancaSinal(v, tamanho, pos + 1);
    }else{
        return 0 + mudancaSinal(v, tamanho, pos + 1);
    }
    
}
