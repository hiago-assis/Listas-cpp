#include <iostream>
using namespace std;

int main(){
	
int n1,n2,n3,n4,n5;
int maior, menor;

cout << "Digite cinco numeros inteiros:";

cin >> n1;
cin >> n2;
cin >> n3;
cin >> n4;
cin >> n5;

// Assumo que n1 é o maior e o menor valor.
maior = n1;
menor = n1;


// Comparo cada um dos outros números (n2, n3, n4, n5) com os valores atuais de maior e menor
// atualizando sempre que for encontrado um numero maior ou menor.

if(n2 > maior){
	maior = n2;
}if(n2 < menor){
	menor = n2;
}

if(n3 > maior){
	maior = n3;
}if(n3 < menor){
	menor = n3;
}

if(n4 > maior){
	maior = n4;
}if(n4 < menor){
	menor = n4;
}

if(n5 > maior){
	maior = n5;
}if(n5 < menor){
	menor = n5;
}

cout << "O maior numero e: " << maior << "\n";
cout << "O menor numero e: " << menor << "\n";
	
}


	