#include <iostream>
using namespace std;

const int LINHA = 5;
const int COLUNA = 4;

void calcularMedias(int *m, int *indiceMelhor, int *qtdAcima);

int main()
{
    int matriz[LINHA][COLUNA];
    int *mPtr = &matriz[0][0];
    int indiceMelhor, qtdAcima;

    cout << "Digite os 20 valores de desempenho:" << endl;
    for (int i = 0; i < LINHA * COLUNA; i++)
    {
        cout << "Participante: " << i / COLUNA << " Etapa: " << i % COLUNA << ": ";
        cin >> *(mPtr++);
    }

    calcularMedias(&matriz[0][0], &indiceMelhor, &qtdAcima);

    cout << "Participante com maior media: " << indiceMelhor << endl;
    cout << "Valores acima da propria media: " << qtdAcima << endl;

    return 0;
}

void calcularMedias(int *m, int *indiceMelhor, int *qtdAcima)
{
    float maiorMedia = 0;

    for (int i = 0; i < LINHA; i++)
    {
        int *inicioLinha = m;   // guarda onde a linha começa
        float soma = 0;

        for (int j = 0; j < COLUNA; j++)
        {
            soma += *m;    // 1ª passada: soma
            m++;
        }

        float mediaAtual = soma / COLUNA;

        if (i == 0 || mediaAtual > maiorMedia)
        {
            maiorMedia = mediaAtual;
            *indiceMelhor = i;
            *qtdAcima = 0;      // zera para a nova melhor linha

            int *p = inicioLinha;
            for (int j = 0; j < COLUNA; j++)
            {
                if (*p > mediaAtual)
                {
                    (*qtdAcima)++;
                }
                p++;
            }
        }
    }
}