#include <iostream>
using namespace std;

const int LINHA = 4;
const int COLUNA = 5;

int somaLinha(int matriz[][COLUNA], int linha, int colunas, int pos);
int linhaMaiorSoma(int m[][COLUNA], int linhas, int linhaAtual, int melhorLinha);

int main(){

    int matriz[LINHA][COLUNA];


    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
                cout << "Linha " << (i + 1) << ": " << "Coluna " << (j + 1) << ": ";
                cin >> matriz[i][j];
        }
    }

    cout << linhaMaiorSoma(matriz, LINHA, 0,0);
}


int somaLinha(int matriz[][COLUNA], int linha, int colunas, int pos){
    if(pos == colunas){
        return 0;
    }

    return matriz[linha][pos] + somaLinha(matriz, linha, colunas, pos + 1); // testando outra forma de retornar o valor da soma.
}

int linhaMaiorSoma(int m[][COLUNA], int linhas, int linhaAtual, int melhorLinha){

    if(linhaAtual == linhas){
        return melhorLinha;
    }

    int somaAtual = somaLinha(m, linhaAtual, COLUNA, 0);
    int somaMelhor = somaLinha(m, melhorLinha, COLUNA, 0);

    if(somaAtual > somaMelhor){
        melhorLinha = linhaAtual;
    }

    return linhaMaiorSoma(m, linhas, linhaAtual + 1, melhorLinha);
}