#include <iostream>
#include <iomanip>
using namespace std;


int main(){

    float X;
    float N;
    float calculoPotencia = 1.0;
    float S = 0;
    

    cout << "Digite a base: ";
    cin >> X;

    cout << "Digite quantos termos a serie tera: ";
    cin >> N;

    for (int i = 1; i <= N;i++){

        calculoPotencia *= X;

        if(i % 2 == 0){
            S -= calculoPotencia;
        }else{
            S += calculoPotencia;
        }

    }

    cout << "O resultado e: " << S;


    return 0;

}