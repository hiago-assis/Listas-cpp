#include <iostream>
using namespace std;

const int LINHA = 3;
const int COLUNA = 3;

void valorAbsoluto(int* p);

int main(){
    int matriz[LINHA][COLUNA];
    int *mPtr = &matriz[0][0];

    for(int i = 0; i < LINHA * COLUNA; i++){
            cin >> *(mPtr++);
        }


    valorAbsoluto(&matriz[0][0]);
    mPtr = &matriz[0][0];

    for(int i = 0; i < LINHA; i++){
            for(int j = 0; j < COLUNA; j++){
                cout << *(mPtr++) << endl;
    }
    cout << endl;
}

    return 0;
}

void valorAbsoluto(int* p){
        for(int i = 0; i < LINHA; i++){
            for(int j = 0; j < COLUNA; j++){
               
                if(*p < 0){
                    *p = *p * -1;
                }
                p++;
    }
    
}

}

