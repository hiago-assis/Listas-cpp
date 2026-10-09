#include <iostream>
using namespace std;

const int TAM = 8;
bool mesmoSinal(int v[], int tamanho, int pos);
bool mesmoSinalV2(int v[], int tamanho);

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

    if (mesmoSinal(vetor, TAM, 1))
    {
        cout << "Versao 1: True" << endl;
    }
    else
    {   
        cout << "Versao 1: False" << endl;
    }

    if (mesmoSinalV2(vetor, TAM))
    {
        cout << "Versao 1: True" << endl;
    }
    else
    {   
        cout << "Versao 1: False" << endl;
    }

    return 0;
}


bool mesmoSinal(int v[], int tamanho, int pos){
    if(pos == tamanho){
        return true;
    }

    if((v[0] > 0 &&  v[pos] < 0) || (v[0] < 0 &&  v[pos] > 0) ){
        return false;
    }
    return mesmoSinal(v, tamanho, pos + 1);
}

bool mesmoSinalV2(int v[], int tamanho){
    if(tamanho == 1){
        return true;
    }

    if((v[0] > 0 &&  v[tamanho - 1] < 0) || (v[0] < 0 &&  v[tamanho - 1] > 0) ){
    
        return false;
    }

    return mesmoSinalV2(v, tamanho - 1);
}