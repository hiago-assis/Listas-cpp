#include <iostream>
using namespace std;

int main(){

    int num1;
    int num2;
    int num3;
    int numIntermediario = 0;


    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    cout << "Digite o terceiro numero: ";
    cin >> num3;


        if((num1 > num2 && num1 < num3) || (num1 > num3 && num1 < num2)){
            numIntermediario = num1;
        }
   
        if((num2 > num1 && num2 < num3) || (num2 > num3 && num2 < num1)){
            numIntermediario = num2;
        }

        if((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1)){
            numIntermediario = num3;
        }

        cout << "O numero intermediario e: "  << numIntermediario << endl; 

        return 0;
}