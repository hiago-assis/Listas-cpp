#include <iostream>
#include <string>
using namespace std;

struct Produto {
    int codigo;
    float preco;
    int qntd;
};

int main(){

    Produto p;
    int valor;

    cout << "Digite o codigo do Produto: ";
    cin >> p.codigo;

    cout << "Digite o preco do Produto: ";
    cin >> p.preco;
    
    cout << "Digite a quantidade do produto: ";
    cin >> p.qntd;


    valor = p.preco * p.qntd;

    cout << p.codigo << endl;
    cout << valor << endl;
   
}