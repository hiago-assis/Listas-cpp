#include <iostream>
#include <string>
using namespace std;

struct Conta
{
    int numero;
    string titular;
    float saldo;
};

Conta deposito(Conta c, float deposito);

int main()
{
    Conta c;
    float valorDeposito;

    cout << "Digite o numero da conta: ";
    cin >> c.numero;

    cout << "Digite o nome do titular da conta: ";
    cin >> c.titular;

    cout << "Digite o saldo da conta: ";
    cin >> c.saldo;

    cout << "Digite o valor do deposito: ";
    cin >> valorDeposito;

    cout << "Saldo antes: R$ " << c.saldo << endl;

    c = deposito(c, valorDeposito);

    cout << "Saldo apos: R$ " << c.saldo;

    return 0;
}

Conta deposito(Conta c, float deposito)
{
    c.saldo = c.saldo + deposito;
    return c;
}