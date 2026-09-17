#include <iostream>
using namespace std;


// Com while
int main() {

    double valor = 0;
    double somaVendas = 0.00;
    double media;
    double maiorVenda;
    int quantidadeVendas = 0;
    int valorMaiorQue100= 0;

    cout << "Digite o valor da venda(digite 0 para sair): ";
    cin >> valor;

    maiorVenda = valor;

    while(valor != 0){

            somaVendas += valor;
            quantidadeVendas++;
      

        if (valor >= 100) {
            valorMaiorQue100++;
        }

        if(valor > maiorVenda){
            maiorVenda = valor;
        }

    cout << "Digite o valor da venda(digite 0 para sair): ";
    cin >> valor;

    }

    media = somaVendas / quantidadeVendas;
    
    cout << "A quantidade de vendas e: " << quantidadeVendas<< "\n";
    cout << "A media das vendas e: R$ " << media << "\n";
    cout << "Quantidade de vendas maior que 100 e: " << valorMaiorQue100 << "\n";
    cout << "O maior valor de uma venda e: R$ " << maiorVenda;

 

    return 0;

}