#include <iostream>
using namespace std;

int main(){
	
	char categoriaIngresso;
	int quantidade;
	double precoUnitario, valorFinal, valorAntesDesconto, valorDesconto;
	string nomeCategoria;
	
	cout << "Digite o categoria do ingresso:(A- Infantil B- Estudante C- Adulto D- Area Vip): ";
	cin >> categoriaIngresso;
	
	cout << "Digite a quantidade de ingressos que deseja:";
	cin >> quantidade;
	
	
	  switch (categoriaIngresso) {
        case 'A':
        case 'a':
            nomeCategoria = "Infantil";
            precoUnitario = 25.00;
            break;
        case 'B':
        case 'b':
            nomeCategoria = "Estudante";
            precoUnitario = 32.00;
            break;
        case 'C':
        case 'c':
            nomeCategoria = "Adulto";
            precoUnitario = 50.00;
            break;
        case 'D':
        case 'd':
            nomeCategoria = "Area VIP";
            precoUnitario = 85.00;
            break;
        default:
            cout << "Categoria invalida.";
            return 0;
    }
    
    valorAntesDesconto = precoUnitario * quantidade;

	if (quantidade >= 5) {
        valorDesconto = valorAntesDesconto * 0.10;
    } else {
        valorDesconto = 0;
    }
    
    valorFinal = valorAntesDesconto - valorDesconto;
    
    cout << "Categoria selecionada: " << nomeCategoria << "\n";
    cout << "Quantidade de ingressos: " << quantidade << "\n";
    cout << "Valor antes do desconto: R$ " << valorAntesDesconto << "\n";
    cout << "Valor do desconto: R$ " << valorDesconto << "\n";
    cout << "Valor final da compra: R$ " << valorFinal << "\n";
	
	
	return 0;
	
}