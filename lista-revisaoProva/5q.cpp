#include <iostream>
using namespace std;

const int LIN = 5;
const int COL = 4;

float mediaEstudante(float matriz[][COL], int estudante);
float mediaAtividade(float matriz[][COL], int numeroAtividadeMedia);
int indiceMaiorMedia(float matriz[][COL]);
int estudantesAcimaDe7(float matriz[][COL]);

int main()
{

    float matriz[LIN][COL];
    int numeroEstudanteMedia;
    int numeroAtividadeMedia;

    for (int i = 0; i < LIN; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << "Linha " << (i + 1) << ": " << "Coluna " << (j + 1) << ": ";
            cin >> matriz[i][j];
        }
    }

    cout << "Digite o numero do estudante que voce deseja calcular a media: " ;
    cin >> numeroEstudanteMedia;
    

    cout << mediaEstudante(matriz, numeroEstudanteMedia);
    cout << endl;
    
    cout << "Digite o numero da atividade que voce deseja calcular a media: ";
    cin >> numeroAtividadeMedia;
    
    cout << "A media da atividade e: " << mediaAtividade(matriz, numeroAtividadeMedia);
    cout << endl;

    cout << "O indice de maior media e: " << indiceMaiorMedia(matriz);
    cout << endl;

    cout << "Quantidade de estudantes media acima de 7: " << estudantesAcimaDe7(matriz);
    cout << endl;

   


    return 0;
}

float mediaEstudante(float matriz[][COL], int estudante)
{

    float somaEstudante = 0;
    float mediaEstudante;

    for (int j = 0; j < COL; j++)
    {

        somaEstudante += matriz[estudante][j];
    }
    mediaEstudante = somaEstudante / COL;
 
   return mediaEstudante;
}

float mediaAtividade(float matriz[][COL], int numeroAtividadeMedia){
    float soma = 0;
    float mediaAtividade;


        for (int i = 0; i < LIN; i++)
        {
            soma+= matriz[i][numeroAtividadeMedia];
        }
    
        mediaAtividade = soma / LIN;

        return mediaAtividade;

}


int indiceMaiorMedia(float matriz[][COL]){

    float media;
    float maiorMedia = 0;
    float soma = 0;
    int indiceMaior = 0;

    for (int i = 0; i < LIN; i++)
    {
        soma = 0;

        for (int j = 0; j < COL; j++)
        {
            soma += matriz[i][j];
        }

        media = soma / COL;

        if(i == 0){
            maiorMedia = media;
        }

        if(media > maiorMedia){
            maiorMedia = media;
            indiceMaior = i;
        }
    }

    return indiceMaior;
}

int estudantesAcimaDe7(float matriz[][COL]){
    int qntd = 0;
    

    for (int i = 0; i < LIN; i++)
    {
       if(mediaEstudante(matriz, i) >= 7){
            qntd++;
       }
    }
    
    return qntd;
}