#include <iostream>
using namespace std;

const int TAM = 4;

int diagonalPrincipal(int matriz[][TAM], int pos, int somaDiagonal);

int main(){

    int matriz[TAM][TAM];


    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
                cout << "Linha " << (i + 1) << ": " << "Coluna " << (j + 1) << ": ";
                cin >> matriz[i][j];
        }
    }

    cout << diagonalPrincipal(matriz, 0, 0);

}

int diagonalPrincipal(int matriz[][TAM], int pos, int somaDiagonal){

    if(pos == TAM){
        return somaDiagonal;
    }

    somaDiagonal += matriz[pos][pos];

    return diagonalPrincipal(matriz, pos + 1, somaDiagonal);
    
}