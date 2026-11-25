#include <iostream>
using namespace std;

struct Conta
{
    int numero;
    float saldo;
};

int saque(Conta *c, float valorSaque);

int main()
{
    Conta c;
    float valorSaque;

    cout << "Digite o numero da conta: ";
    cin >> c.numero;

    cout << "Digite o saldo da conta: ";
    cin >> c.saldo;

    cout << "Digite o valor do saque: ";
    cin >> valorSaque;

    if(saque(&c, valorSaque) == 1){
        cout << "Saque realizado com sucesso!" << endl;
    }else{
        cout << "Saldo insuficiente. Saque nao realizado." << endl;
    }

    cout << "Saldo final: " << c.saldo << endl;

    return 0;
}

int saque(Conta *c, float valorSaque)
{
    if(valorSaque <= c->saldo){
        c->saldo -= valorSaque;
        return 1;
    }else{
        return 0;
    }
}