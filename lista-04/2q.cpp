#include <iostream>
using namespace std;

int main(){
	
	double temperaturaCelsius, conversao;
	int opcao;
	string tipoDeMedida;

	
	
	cout << "Digite a temperatura em Celsius: ";
	cin >> temperaturaCelsius;
	
	
	cout << "\nEscolha uma opcao de conversao:\n";
    cout << "1 - Converter para Fahrenheit\n";
    cout << "2 - Converter para Kelvin\n";
    cout << "3 - Converter para Rankine\n";
    cout << "Opcao: ";
    cin >> opcao;
	
	
	
	
	switch(opcao){
		case 1: 
				tipoDeMedida = "Fahrenheit";
				conversao = temperaturaCelsius * 1.8 + 32;
			break;
		case 2:
				tipoDeMedida = "Kelvin";
				conversao = temperaturaCelsius + 273.15;
			break;
		case 3:
				tipoDeMedida = "Rankine";
				conversao = (temperaturaCelsius +  273.15) * 1.8;
			break;
		default:
			cout << "Operacao escolhida e invalida";
			return 0;
	}
	
	cout << "Temperatura original: " << temperaturaCelsius << "\n";
    cout << "Temperatura apos ser convertida de Celsius para " << tipoDeMedida << ": " << conversao;
	
	return 0;
	
}