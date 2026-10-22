#include <iostream>
using namespace std;

const int LINHA = 4;
const int COLUNA = 4;

int somaDiagonalPrincipal(int* p);

int main(){
    int matriz[LINHA][COLUNA];
    int *mPtr = &matriz[0][0];

    for(int i = 0; i < LINHA * COLUNA; i++){
            cin >> *(mPtr++);
        }


    cout << somaDiagonalPrincipal(&matriz[0][0]);

    return 0;
}

int somaDiagonalPrincipal(int* p){
    int soma = 0;

    
        for(int i = 0; i < LINHA; i++){
            for(int j = 0; j < COLUNA; j++){
                if(i == j){
                    soma += *p; 
                }
                p++;
    }
    
}
return soma;
}

