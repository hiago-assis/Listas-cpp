#include <iostream>
using namespace std;

bool verificarPalindromo(int numeroOriginal, int numeroInvertido);
int inverterNumero(int X, int resultado);

int main()
{
    int X;
    int numeroInvertido;

    cout << "Digite um numero inteiro: ";
    cin >> X;

    numeroInvertido = inverterNumero(X, 0);
    
    if(verificarPalindromo(X, numeroInvertido)){
        cout << "E palindromo";
    }else{
        cout << "Nao e palindromo";
    }
}

int inverterNumero(int X, int resultado){

    int algarismo;
    int restoNum;


    if(X == 0){
        return resultado;
    }

    algarismo = X % 10;    
    restoNum = X / 10;
    
   
    return inverterNumero(restoNum, resultado = resultado * 10 + algarismo);
}

bool verificarPalindromo(int numeroOriginal, int numeroInvertido){

    if(numeroOriginal == numeroInvertido){
        return true;
    }else{
        return false;
    }
}