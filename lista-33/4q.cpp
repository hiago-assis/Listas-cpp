#include <iostream>
using namespace std;


const int LINHA = 3;
const int COLUNA = 4;

void alterarMatriz(int *m, int linhas);

int main(){
    int matriz[LINHA][COLUNA];
    int *mPtr = &matriz[0][0];


    for(int i = 0; i < LINHA * COLUNA;i++){
        cin >> *(mPtr++);
    }

    alterarMatriz(&matriz[0][0], LINHA);

    mPtr = &matriz[0][0];
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            cout << *(mPtr++) << " ";
        }
        cout << endl;
    }

}

void alterarMatriz(int *m, int linhas){

    for(int i = 0; i < linhas * COLUNA;i++){

        if(*m > 0){
            *m *= 2;
        }
        else if(*m < 0){
            *m = -*m;
        }
        m++;
    }
}