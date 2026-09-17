#include <iostream>
using namespace std;

int main(){
	
	
	int qtdPessoas, reprovacoes;
	double rendaFamiliar, mediaGeral, frequencia, rendaPerCapita;
	char projeto;
	
	
	cout << "Informe a renda familiar mensal: R$ ";
    cin >> rendaFamiliar;

    cout << "Informe a quantidade de pessoas da familia: ";
    cin >> qtdPessoas;

    cout << "Informe a media geral do curso (0 a 10): ";
    cin >> mediaGeral;

    cout << "Informe o percentual de frequencia (0 a 100): ";
    cin >> frequencia;

    cout << "Informe a quantidade de reprovacoes: ";
    cin >> reprovacoes;

    cout << "Participa de projeto de pesquisa ou extensao? (S/N): ";
    cin >> projeto;

	
	rendaPerCapita = rendaFamiliar / qtdPessoas;
	
	cout << "\nRenda per capita: R$ " << rendaPerCapita << "\n";


    if (frequencia < 70 || reprovacoes >= 3) {
        cout << "Nao contemplado";
    }
	else if(rendaPerCapita <= 900 &&
       mediaGeral >= 8.0 &&
   	   frequencia >= 85 &&
       reprovacoes <= 1){
       	
		   cout << "Voce tem direito a bolsa integral";
	}else if(rendaPerCapita <= 1500 &&
                mediaGeral >= 7.0 &&
   	            frequencia >= 75 &&
                reprovacoes <= 2){


            cout << "Voce tem direito a bolsa parcial";
    }else if(
                mediaGeral >= 9.0 &&
   	            frequencia >= 90 &&
                reprovacoes == 0 &&
                (projeto == 'S' || projeto == 's')){

            cout << "Voce tem direito a bolsa por merito";
    } else {
            cout << "Nao contemplado";
    }
	
	
	
	
return 0;	
}