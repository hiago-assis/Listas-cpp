#include <iostream>
using namespace std;



const int TAM = 4;

int maiorSoma(int *m, int indiceUm, int indiceDois);

int main(){
    int matriz[TAM][TAM];
    int *mPtr = &matriz[0][0];
    int indiceUm;
    int indiceDois;

    for(int i = 0; i < TAM * TAM;i++){
        cin >> *(mPtr++);
    }



    cout << "Digite o primeiro indice de linha: ";
    cin >> indiceUm;
    cout << "Digite o segundo indice de linha: ";
    cin >> indiceDois;

    cout << maiorSoma(&matriz[0][0], indiceUm, indiceDois);

}

int maiorSoma(int *m, int indiceUm, int indiceDois){
    int somaUm = 0;
    int somaDois = 0;
    int elementoUm;
    int elementoDois;
    

    for(int j = 0; j < TAM; j++){
        elementoUm = *(m + indiceUm * TAM + j);
        elementoDois = *(m + indiceDois * TAM + j);
        somaUm += elementoUm;
        somaDois += elementoDois;

    }

    if(somaUm > somaDois){
        return indiceUm;
    }if(somaDois > somaUm){
        return indiceDois;
    }
return -1;
    


}