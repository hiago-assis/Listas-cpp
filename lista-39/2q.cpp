#include <iostream>
#include <string>
using namespace std;

struct Produto
{
    int codigo;
    string descricao;
    float preco;
    int qntd;
};

const int TAM = 1;

int main()
{
    Produto p[TAM];
    int codigoProduto;
    int qntdVendida;
    int indiceProduto = -1;

    for (int i = 0; i < TAM; i++)
    {
        cout << "Digite o codigo do produto " << i + 1 << ": ";
        cin >> p[i].codigo;

        cout << "Digite a descricao do produto " << i + 1 << ": ";
        cin >> p[i].descricao;

        cout << "Digite o preco do produto " << i + 1 << ": ";
        cin >> p[i].preco;

        cout << "Digite a quantidade em estoque do produto " << i + 1 << ": ";
        cin >> p[i].qntd;
    }

    cout << "Digite o codigo do produto a ser vendido: ";
    cin >> codigoProduto;

    cout << "Digite a quantidade vendida: ";
    cin >> qntdVendida;

    for (int i = 0; i < TAM; i++)
    {
        if (p[i].codigo == codigoProduto)
        {
            indiceProduto = i;

            if (p[i].qntd >= qntdVendida)
            {
                p[i].qntd -= qntdVendida;

                cout << "Venda realizada com sucesso." << endl;
            }
            else
            {
                cout << "Estoque insuficiente." << endl;
            }

            break;
        }
    }

    if (indiceProduto != -1)
    {
        cout << "Codigo: " << p[indiceProduto].codigo << endl;
        cout << "Descricao: " << p[indiceProduto].descricao << endl;
        cout << "Preco: R$ " << p[indiceProduto].preco << endl;
        cout << "Quantidade em estoque: " << p[indiceProduto].qntd << endl;
    }
    else
    {
        cout << "Produto nao encontrado." << endl;
    }

    return 0;
}