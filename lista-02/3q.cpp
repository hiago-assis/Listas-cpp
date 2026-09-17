#include <iostream>
using namespace std;

int main(){

int num1, num2;


cout << "Digite um numero inteiro: " ;
cin >> num1 ;

cout << "Digite o segundo numero inteiro: ";
cin >> num2;

if(num1 % num2 == 0){
 	 cout << num1 << " e multiplo de " << num2 << "\n";
}else{
	cout << num1 << " nao e multiplo de " << num2 << "\n";
}
return 0;
}
