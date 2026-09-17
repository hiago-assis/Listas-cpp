#include <iostream>
using namespace std;

int main(){
	
	double peso, valorFinal;
	int codigoModalidade;
	string modalidadeEscolhida;
	
	cout << "Digite o peso da encomenda: ";
	cin >> peso;
	
	
	cout << "\nEscolha uma modalidade de entrega:\n";
	cout << "1 - Entrega Economica\n";
	cout << "2 - Entrega Expressa\n";
	cout << "3 - Entrega no Mesmo Dia\n";
	cout << "4 - Retirada em Unidade\n";
	cout << "Opcao: ";
	cin >> codigoModalidade;
	
	
	switch(codigoModalidade){
		case 1:
			modalidadeEscolhida = "Entrega Economica"; 
			valorFinal = 8 + (1.50 * peso);
			break;
		case 2:
            modalidadeEscolhida = "Entrega Expressa";
            valorFinal = 15.00 + (2.50 * peso);
            break;
        case 3:
            modalidadeEscolhida = "Entrega no Mesmo Dia";
            valorFinal = 25.00 + (4.00 * peso);
            break;
        case 4:
            modalidadeEscolhida = "Retirada em Unidade";
            valorFinal = 5.00;
            break;
        default:
            cout << "Modalidade de entrega invalida.";
            return 0;
	}
	
	cout << "\nModalidade escolhida: " << modalidadeEscolhida << "\n";
    cout << "Valor da entrega: R$ " << valorFinal << "\n";
	
	
	return 0;
}