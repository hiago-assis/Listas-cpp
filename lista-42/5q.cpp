
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct Pedido
{
    int numPedido;
    int qntdItens;
    float valorTotal;
};

void qntdPedidos(Pedido *p, int tamanho, int *qntdSuperior, float *somaValores);

int main()
{
    int n;
    int qntd;
    float soma;

    cout << "Digite a quantidade de pedidos: ";
    cin >> n;

    Pedido *p = (Pedido*) malloc(n * sizeof(Pedido));

    for(int i = 0; i < n; i++)
    {
        cout << "Pedido " << i + 1 << endl;

        cout << "Digite o numero do pedido: ";
        cin >> (p + i)->numPedido;

        cout << "Digite a quantidade de itens: ";
        cin >> (p + i)->qntdItens;

        cout << "Digite o valor total do pedido: R$ ";
        cin >> (p + i)->valorTotal;
    }

    qntdPedidos(p, n, &qntd, &soma);

    cout << "Quantidade de pedidos acima de R$ 200,00: " << qntd << endl;
    cout << "Soma dos valores desses pedidos: R$ " << soma << endl;

    free(p);

    return 0;
}

void qntdPedidos(Pedido *p, int tamanho, int *qntdSuperior, float *somaValores)
{
    *qntdSuperior = 0;
    *somaValores = 0;

    for(int i = 0; i < tamanho; i++)
    {
        if((p + i)->valorTotal > 200)
        {
            (*qntdSuperior)++;
            *somaValores += (p + i)->valorTotal;
        }
    }
}
