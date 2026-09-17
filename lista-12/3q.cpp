#include <iostream>
#include <iomanip>
using namespace std;


int lerNumero(){
    int num;
    
    do{

    cout << "Digite um numero: ";
    cin >> num;

    if(num < 0 || num > 12){
        cout << "Valor invalido." << endl;
    }

    }while(num < 0 || num > 12);
    

    return num;

}

int calcularFatorial(int num){

    int calculoFatorial = 1;
    
    for (int i = 1; i <= num;i++){

        calculoFatorial *= i;

    }

    return calculoFatorial;
}

int main(){

    int num = lerNumero();

    int fatorial = calcularFatorial(num);

    cout << "O resultado do fatorial e: " << fatorial << endl;

    return 0;
}