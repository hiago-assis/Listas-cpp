#include <iostream>
using namespace std;

const int LINHA = 4;
const int COLUNA = 4;

void trocaElementos(int* p, int primeiroIndice, int segundoIndice);

int main(){
    int primeiroIndice;
    int segundoIndice;

    int matriz[LINHA][COLUNA];
    int *mPtr = &matriz[0][0];

    cout << "Digite o primeiro indice: ";
    cin >> primeiroIndice;
    

    cout << "Digite o segundo indice: "; 
    cin >> segundoIndice;

    for(int i = 0; i < LINHA * COLUNA; i++){
            cin >> *(mPtr++);
        }


    trocaElementos(&matriz[0][0], primeiroIndice, segundoIndice);

    mPtr = &matriz[0][0];

    for(int i = 0; i < LINHA; i++){
            for(int j = 0; j < COLUNA; j++){
                cout << *(mPtr++) << endl;
    }
    cout << endl;
}

    return 0;
}

void trocaElementos(int* p, int primeiroIndice, int segundoIndice){
   


    for(int j = primeiroIndice; j < COLUNA; j++){
        for(int i = 0; i < LINHA; i++){
                  
    }
}

}

