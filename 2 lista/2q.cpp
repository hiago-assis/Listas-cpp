#include <iostream>
using namespace std;

int main(){

int num;
int par, impar;

cout << "Digite um numero inteiro:" ;
cin >> num ;

if(num % 2 == 0){
cout << num << " e par" << "\n" ;
}else{
cout << num << " e impar" << "\n" ;
}
return 0;
}
