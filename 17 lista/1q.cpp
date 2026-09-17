#include <iostream>
using namespace std;

const int MAX = 10;
const int VAGA_LIVRE = 0;
const int VAGA_OCUPADA = 1;
const int VAGA_RESERVADA = 2;
void preencherMatriz(int matriz[][MAX], int linhas, int colunas);
int contarVagas(int matriz[][MAX], int linhas, int colunas);
int maiorQuantidadeDeVagasOcupadas(int matriz[][MAX], int linhas, int colunas);
bool vagaReservadaDisponivel(int matriz[][MAX], int linhas, int colunas);

int main()
{

    int linhas;
    int colunas;
    int vagasLivres;
    int fileiraMaior;
    bool vagasReservadas;

    cout << "Digite a quantidade de linhas da sua matriz(Maximo:10):";
    cin >> linhas;

    while (linhas > 10 || linhas < 1)
    {
        cout << "Valor de linhas da matriz incorreto, digite novamente:";
        cin >> linhas;
    }

    cout << "Digite a quantidade de colunas da sua matriz(Maximo:10):";
    cin >> colunas;

    while (colunas > 10 || colunas < 1)
    {
        cout << "Valor de colunas sda matriz incorreto, digite novamente:";
        cin >> colunas;
    }

    int matriz[MAX][MAX];

    preencherMatriz(matriz, linhas, colunas);
    vagasLivres = contarVagas(matriz, linhas, colunas);
    fileiraMaior = maiorQuantidadeDeVagasOcupadas(matriz, linhas, colunas);
    vagasReservadas = vagaReservadaDisponivel(matriz, linhas, colunas);

    cout << "A quantidade de vagas livres e: " << vagasLivres << endl;

    cout << "A fileira com a maior quantidade de vagas ocupadas e: " << fileiraMaior + 1 << endl;

    if (vagasReservadas)
    {
        cout << "Possui vagas reservadas disponiveis";
    }
    else
    {
        cout << "Nao possui vagas reservadas";
    }
}

void preencherMatriz(int matriz[][MAX], int linhas, int colunas)
{

    int valorDigitado;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << "Linha " << (i + 1) << ": " << "Coluna " << (j + 1) << ": ";
            cin >> valorDigitado;

            while (valorDigitado > 2 || valorDigitado < 0)
            {
                cout << "Valor invalido, digite um valor correto(0 a 2)" << endl;
                cin >> valorDigitado;
            }

            matriz[i][j] = valorDigitado;
        }
    }
}

int contarVagas(int matriz[][MAX], int linhas, int colunas)
{
    int qntdVagasLivres = 0;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (matriz[i][j] == VAGA_LIVRE)
            {
                qntdVagasLivres++;
            }
        }
    }
    return qntdVagasLivres;
}

int maiorQuantidadeDeVagasOcupadas(int matriz[][MAX], int linhas, int colunas)
{

    int qntdVagasOcupadas;
    int maiorFileira = 0;
    int recordeDaFileira = 0;

    for (int i = 0; i < linhas; i++)
    {
        qntdVagasOcupadas = 0;
        for (int j = 0; j < colunas; j++)
        {
            if (matriz[i][j] == VAGA_OCUPADA)
            {
                qntdVagasOcupadas++;
            }
        }

        if (qntdVagasOcupadas > recordeDaFileira)
        {
            maiorFileira = i;
            recordeDaFileira = qntdVagasOcupadas;
        }
    }

    return maiorFileira;
}

bool vagaReservadaDisponivel(int matriz[][MAX], int linhas, int colunas)
{

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (matriz[i][j] == VAGA_RESERVADA)
            {
                return true;
            }
        }
    }
    return false;
}
