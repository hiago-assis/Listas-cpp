#include <iostream>
using namespace std;

int main(){
	
	
	double valorCompra, valorFinal; 
	int idade, formaDePagamento;
	char fidelidade;
	double percentualDesconto;
	
	cout << "Digite o valor total da compra: ";
    cin >> valorCompra;

    cout << "Digite a idade do cliente: ";
    cin >> idade;

    cout << "O cliente participa do programa de fidelidade? (S/N): ";
    cin >> fidelidade;

    cout << "Forma de pagamento (1-PIX, 2-Cartao a vista, 3-Cartao parcelado): ";
    cin >> formaDePagamento;
    
     
    if ((fidelidade == 'S' || fidelidade == 's') && valorCompra >= 300.00) {
        if (0.10 > percentualDesconto) {
            percentualDesconto = 0.10;
        }
    }

    
    if (idade >= 60 && valorCompra >= 150.00) {
        if (0.08 > percentualDesconto) {
            percentualDesconto = 0.08;
        }
    }

    
    if (valorCompra >= 500.00 && formaDePagamento == 1) {
        if (0.12 > percentualDesconto) {
            percentualDesconto = 0.12;
        }
    }

	
    if (formaDePagamento == 3) {
        if (idade >= 60 && (fidelidade == 'S' || fidelidade == 's')) {
            percentualDesconto = 0.05;
        } else {
            percentualDesconto = 0;
        }
    }

    valorFinal = valorCompra - (valorCompra * percentualDesconto);

    cout << "Percentual de desconto aplicado: " << (percentualDesconto * 100) << "%" << "\n";
    cout << "Valor final da compra: " << valorFinal << "\n";
	
return 0;	
}