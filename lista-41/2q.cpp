#include <iostream>
using namespace std;

struct Produto
{
    int codigo;
    float preco;
    int quantidade;
};

void alterarPreco(Produto *p, float percentualDesconto);

int main()
{
    Produto p;
    float percentualDesconto;

    cout << "Digite o codigo do produto: ";
    cin >> p.codigo;

    cout << "Digite o preco do produto: ";
    cin >> p.preco;

    cout << "Digite a quantidade em estoque: ";
    cin >> p.quantidade;

    cout << "Digite o percentual de desconto: ";
    cin >> percentualDesconto;

    cout << "Preco atual: " << p.preco << endl;

    alterarPreco(&p, percentualDesconto);

    cout << "Novo preco: " << p.preco << endl;

    return 0;
}

void alterarPreco(Produto *p, float percentualDesconto)
{

    float desconto = p->preco * percentualDesconto / 100;

    p->preco -= desconto;
}