#include <iostream>
using namespace std;

int main(){
	
	int idade, anosTrabalhado;
	double salarioMensal, valorParcela, percentualMaximo;
	char dividaAtrasada;
	
	cout << "Digite sua idade:";
	cin >> idade;
	
	cout << "Digite seu salario:";
	cin >> salarioMensal;
	
	cout << "Digite o valor da parcela:";
	cin >> valorParcela;
	
	cout << "Digite quantos anos que voce trabalha no emprego atual:";
	cin >> anosTrabalhado;
	
	cout << "O cliente possui divida em atraso? (S/N): ";
	cin >> dividaAtrasada;
	
	if(salarioMensal >= 8000.00){
		percentualMaximo = 0.40;
	}else{
		percentualMaximo = 0.30;
	}
	
	
	if((idade >= 21 && idade <=65) && 
		(anosTrabalhado >= 2) && 
		(dividaAtrasada == 'N' || dividaAtrasada == 'n') && 
		(valorParcela <= (percentualMaximo * salarioMensal)) ){
			
			cout << "APROVADO" << "\n";

	}else if (idade < 21 || idade > 65) {
        cout << "NEGADO" << "\n";
        cout << "Requisito nao atendido: idade fora da faixa permitida (21 a 65 anos)." << "\n";
    }
    else if (anosTrabalhado < 2) {
        cout << "NEGADO." << "\n";
        cout << "Requisito nao atendido: tempo minimo de 2 anos no emprego atual." << "\n";
    }
    else if (dividaAtrasada == 'S' || dividaAtrasada == 's') {
        cout << "NEGADO." << "\n";
        cout << "Requisito nao atendido: cliente possui divida em atraso." << "\n";
    }
    else if (valorParcela > (percentualMaximo * salarioMensal)) {
        cout << "NEGADO." << "\n";
        cout << "Requisito nao atendido: valor da parcela ultrapassa o limite permitido em relacao ao salario." << "\n";
    }
	
	
	return 0;
}