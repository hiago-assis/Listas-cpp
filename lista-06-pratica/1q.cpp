#include <iostream>
using namespace std;

const int LINHA = 3;
const int COLUNA = 4;

void imprimirMatriz(int* p);

int main(){
    int matriz[LINHA][COLUNA];
    int *mPtr = &matriz[0][0];

    for(int i = 0; i < LINHA * COLUNA; i++){
            cin >> *(mPtr++);
        }

    mPtr = &matriz[0][0];

    imprimirMatriz(mPtr);

    return 0;
}

void imprimirMatriz(int* p){

    for(int j = 0; j < COLUNA; j++){
        cout << "Coluna " << j << ":";
        for(int i = 0; i < LINHA; i++){
            cout << " " << *(p + i * COLUNA + j);

        }
        cout << endl;
    }
}