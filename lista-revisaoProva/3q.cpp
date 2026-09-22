#include <iostream>
using namespace std;

const int TAM = 10;

void lerNotas(float notas[], int tamanho);
float calcularMedia(float notas[], int tamanho);
float maiorNota(float notas[], int tamanho);
int contarAcimaMedia(float notas[], int tamanho, float media);
void apresentarMaiorQue7(float notas[], int tamanho);

int main(){

    float notas[TAM];
    float mediaTurma;

    lerNotas(notas,TAM);
    mediaTurma = calcularMedia(notas,TAM);

    cout << "A media da turma e:" << mediaTurma << endl;
    cout << "A maior nota e: " << maiorNota(notas, TAM) << endl;
    cout << "A quantidade de alunos com a nota acima da media e: " << contarAcimaMedia(notas,TAM,mediaTurma) << endl;

    apresentarMaiorQue7(notas, TAM);


    return 0;
}

void lerNotas(float notas[], int tamanho){

    float nota;

    for(int i = 0; i < tamanho;i++){

        cout << "Digite a " << i + 1 << " Nota:";
        cin >> nota;

        while(nota > 10.0 || nota < 0.0){
            cout << "Nota invalida, digite novamente: ";
            cin >> nota;
        }

        notas[i] = nota;

    }
}

float calcularMedia(float notas[], int tamanho){

    float soma = 0;
    float media;

    for(int i = 0; i < tamanho;i++){
        soma+= notas[i];
    }

    media = soma / tamanho;

    return media;

}

float maiorNota(float notas[], int tamanho){

    float maior;

    for(int i = 0; i < tamanho;i++){

        if(i == 0){
            maior = notas[i];
        }

        if(notas[i] > maior){
            maior = notas[i];
        }
    }

    return maior;
}

int contarAcimaMedia(float notas[], int tamanho, float media){
    int qntd = 0;

    for(int i = 0; i < tamanho;i++){
        if(notas[i] > media){
            qntd++;
        }
    }

    return qntd;
}

void apresentarMaiorQue7(float notas[], int tamanho){

    for(int i = 0; i < tamanho; i++){
        if(notas[i] >= 7.0){
            cout << "O aluno tem nota maior que 7, o valor e: " << notas[i] << endl;

        }

    }
}