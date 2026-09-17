#include <iostream>
using namespace std;

int main(){
	
	
	int opcao;
	double saldoInicial, saldoAtual, valorDeposito, valorSaque, valorRendimento;
	
	
	cout << "Digite seu saldo: ";
	cin >> saldoInicial;
	
	
	cout << "\nEscolha uma das opcoes abaixo:\n";
	cout << "1 - Consultar saldo\n";
	cout << "2 - Realizar deposito\n";
	cout << "3 - Realizar saque\n";
	cout << "4 - Aplicar rendimento\n";
	cout << "Opcao: ";
	cin >> opcao;
	
	switch(opcao){
		case 1:
			saldoAtual = saldoInicial;
			cout << "\nSeu saldo atual e: R$ " << saldoAtual;
			break;
		case 2:
			cout << "\nDigite o valor que deseja depositar:";
			cin >> valorDeposito;
			
			saldoAtual = valorDeposito + saldoInicial;
			
			 cout << "\nSaldo anterior: R$ " << saldoInicial << "\n";
			 cout << "Valor do deposito: R$ " << valorDeposito << "\n";
             cout<<"Saldo apos deposito e: R$ " << saldoAtual;
			
		case 3:
			
			cout << "\nDigite o valor que deseja sacar:";
			cin >> valorSaque;
			
			if(valorSaque > saldoInicial){
				cout << "Saldo insuficiente";
			}else{
				saldoAtual = saldoInicial - valorSaque;
				
				cout << "\nSaldo anterior: R$ " << saldoInicial << "\n";
				cout << "Valor do saque: R$ " << valorSaque << "\n";
				cout<<"Saldo apos saque e: R$ " << saldoAtual; 
				
			}
			break;
		case 4:
			
			saldoAtual = saldoInicial;
			valorRendimento = saldoAtual * 0.012;
			saldoAtual = saldoAtual + valorRendimento;
			
			cout << "\nSaldo anterior: R$ " << saldoInicial << "\n";
            cout << "Valor do rendimento: R$ " << valorRendimento << "\n";
            cout << "Novo saldo: R$ " << saldoAtual << "\n";
		   	break;
		   
        default:
            cout << "\nOperacao invalida.\n";
            return 0;
			
	}
	
	
	
	   return 0;	
}