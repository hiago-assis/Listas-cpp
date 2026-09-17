#include <iostream>
using namespace std;

int main(){
	
	int codigo, horas;
	double valorFinal;
	string tipoVeiculo;
	
	
	cout << "Digite o codigo do veiculo(1-Motocicleta, 2-Carro, 3-Caminhonete, 4-Van): ";
	cin >> codigo;
	
	cout << "Digite quantas horas o veiculo permaneceu no estacionamento:";
	cin >> horas;
	
	switch(codigo){
		case 1: 
			tipoVeiculo = "Motocicleta";
			valorFinal = horas * 3.50;
			break;
		case 2: 
			tipoVeiculo = "Carro";
			valorFinal = horas * 6.00;
			break;
		case 3: 
			tipoVeiculo = "Caminhonete";
			valorFinal = horas * 8.50;
			break;
		case 4: 
			tipoVeiculo = "Van";
			valorFinal = horas * 11.00;
			break;
		default:
            cout << "Tipo de veiculo invalido.";
            return 0;
	}
	
	
	cout << "Tipo de veiculo: " << tipoVeiculo << "\n";
    cout << "Valor total: R$ " << valorFinal << "\n";
	return 0;
	
}