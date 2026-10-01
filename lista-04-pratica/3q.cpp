#include <iostream>
using namespace std;

const int TAM = 5;
int potencia(int base, int expoente);
void quadrado(int v[], int tamanho, int pos);

int main(){
    int b;
    int e;
    int vetor[TAM];

    cin >> b;
    cin >> e;

    cout << potencia(b, e) << endl;

    for(int i = 0; i < TAM;i++){
        cin >> vetor[i];
    }

    quadrado(vetor, TAM, 0);

     for(int i = 0; i < TAM;i++){
        cout << vetor[i] << " ";
    }


}


int potencia(int base, int expoente){

    if(expoente == 0 ){
        return 1;
    }

    return potencia(base, expoente-1)*base;
}

void quadrado(int v[], int tamanho, int pos){

    if(tamanho == 1){
        return;
    }
    
    
    if(v[pos] % 2 == 0){
        v[pos] = v[pos] * v[pos];
    }
    quadrado(v, tamanho - 1,pos + 1);
}