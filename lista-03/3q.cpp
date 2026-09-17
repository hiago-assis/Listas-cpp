#include <iostream>
using namespace std;

int main(){
	
	int idade, numeroFaltas;
	double tempo;
	char resultadoExame;
	
	cout << "Digite a idade do atleta: ";
    cin >> idade;

    cout << "Digite o tempo obtido na prova (em segundos): ";
    cin >> tempo;

    cout << "Digite o numero de faltas cometidas: ";
    cin >> numeroFaltas;

    cout << "Resultado do exame medico (A para apto, I para inapto): ";
    cin >> resultadoExame;
    
    if((resultadoExame == 'A' || resultadoExame == 'a') &&
    	(numeroFaltas < 3) &&
    (
	 (idade >= 18 && idade <= 29 && ((numeroFaltas < 2 && tempo <= 14) || (numeroFaltas == 2 && tempo <= 13))) ||
            (idade >= 30 && idade <= 39 && ((numeroFaltas < 2 && tempo <= 15) || (numeroFaltas == 2 && tempo <= 14))) ||
            (idade >= 40 && ((numeroFaltas < 2 && tempo <= 17) || (numeroFaltas == 2 && tempo <= 16)))
        )
    ) {
        cout << "CLASSIFICADO" << "\n";
    } else {
        cout << "ELIMINADO" << "\n";
    }   
	
	
	return 0;
}