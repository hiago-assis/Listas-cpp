#include <iostream>
using namespace std;

const int TAM = 8;

int qntdValoresPositivos(int v[], int tam, int pos, int qntd);


int main(){

    int vetor[TAM];

    for(int i = 0; i < TAM;i++){
        cin >> vetor[i];
    }


    cout << qntdValoresPositivos(vetor, TAM, 0,0);

    return 0;
}


int qntdValoresPositivos(int v[], int tam, int pos){

    if(pos == tam){
        return 0;
    }


    if(v[pos] > 0){
        return 1 + qntdValoresPositivos(v, tam, pos + 1);
    }

    return qntdValoresPositivos(v, tam, pos + 1);
}

