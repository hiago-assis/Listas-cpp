#include <iostream>
#include <iomanip>
using namespace std;


int lerExpoente(){
    int expoente;
    
    do{

    cout << "Digite o expoente: ";
    cin >> expoente;

    if(expoente < 0 || expoente > 20){
        cout << "Valor invalido." << endl;
    }

    }while(expoente < 0 || expoente > 20);
    

    return expoente;

}

int calcularPotencia(int base, int expoente){

    int calculoPotencia = 1;

    
    for (int i = 0; i < expoente;i++){

        calculoPotencia *= base;

    }

    return calculoPotencia;
}

int main(){

     int base;
     int expoente;
     int potencia;

     cout << "Digite a base: ";
     cin >> base;

     expoente = lerExpoente();


    potencia = calcularPotencia(base, expoente);

    cout << "O resultado da potenciacao e: " << potencia << endl;
     



    return 0;
}