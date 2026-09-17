#include <iostream>
using namespace std;

int main(){
	
	int idade, horaEntrada;
	char tipoUsuario, autorizacaoEspecial; 
	
	cout << "Digite sua idade:";
	cin >> idade;
	
	cout << "Digite o seu tipo de usuario (A para aluno, P para professor, V para visitante):";
	cin >> tipoUsuario;
	
	cout << "Hora da entrada:";
	cin >> horaEntrada;
	
	cout << "Possui autorizacao especial? (S ou N):";
	cin >> autorizacaoEspecial;
	
	if((tipoUsuario == 'P' || tipoUsuario == 'p') &&
		(horaEntrada >= 6 && horaEntrada <= 22)){
			cout << "LIBERADO";
	}else if((tipoUsuario == 'A' || tipoUsuario == 'a') &&
			  (horaEntrada >= 8 && horaEntrada <= 18)){
				  cout << "LIBERADO";
	}else if((tipoUsuario == 'A' || tipoUsuario == 'a') &&
			  (horaEntrada >= 18 && horaEntrada <= 21) &&
	 	 	  (autorizacaoEspecial == 'S' || autorizacaoEspecial == 's')   			  
			  ){
				  cout << "LIBERADO";
	}else if((tipoUsuario == 'V' || tipoUsuario == 'v') &&
			  (idade >= 18) &&	
			  (horaEntrada >= 9 && horaEntrada <= 17) &&
	 	 	  (autorizacaoEspecial == 'S' || autorizacaoEspecial == 's')   			  
			  ){
				  cout << "LIBERADO";
	}else{
		cout << "NEGADO";
	}

return 0;	
}	