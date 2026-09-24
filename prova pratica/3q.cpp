#include <iostream>
using namespace std;

const int LIN = 3; // funcionarios
const int COL = 5; // dias
const int TAM = 3; // tamanho vetor

void totalAtendimentos(int matriz[][COL], int vetor[]);
int indiceFuncionarioMaiorTotal(int vetor[]);

int main(){

    int matriz[LIN][COL];
    int vetor[TAM];

    for(int i = 0; i < LIN;i++){
        for(int j = 0; j < COL;j++){
            cout << "Linha " << i + 1 << " Coluna " << j + 1 << ": ";
            cin >> matriz[i][j];
        }
    }

    totalAtendimentos(matriz, vetor);

    for(int i = 0;i < TAM ;i++){

        cout << "O total do vendedor " << i << " e:" << vetor[i] << endl;;
    }

    cout << "O indice do maior funcionario e: " << indiceFuncionarioMaiorTotal(vetor);

    
}


void totalAtendimentos(int matriz[][COL], int vetor[]){

    int soma = 0;
    
    for(int i = 0; i < LIN;i++){
        soma = 0;
        for(int j = 0; j < COL;j++){
            soma += matriz[i][j];
        }
        vetor[i] = soma;
    }
}

int indiceFuncionarioMaiorTotal(int vetor[]){

    int indiceMaior;
    int maiorFuncionario;

    for(int i = 0; i < TAM; i++){

        if(i == 0){
            indiceMaior = i;
            maiorFuncionario = vetor[i];
        }

        if(vetor[i] > maiorFuncionario){
            indiceMaior = i;

        }
    }
    return indiceMaior;
}