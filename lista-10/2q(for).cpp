#include <iostream>
using namespace std;


// Com for
int main() {

    double altura;
    int alturaSuperior = 0;
    double somaAltura;
    double mediaAlturas;
    double maiorAltura;

    
    for(int i = 1; i <= 10 ;i++){

        cout <<"Digite a altura da pessoa(em metros): ";
        cin >> altura;

        somaAltura += altura;

         if (i == 1) {
            maiorAltura = altura;
        } else if (altura > maiorAltura) {
            maiorAltura = altura;
        }

        if(altura > 1.70){
            alturaSuperior++;
        }
    }

    mediaAlturas = somaAltura / 10;

    cout << "A media da altura e: " << altura << "\n";
    cout << "A quantidade de pessoas com altura superior a 1,70m e: " << alturaSuperior << "\n";
    cout << "Maior altura registrada: " << maiorAltura << "\n";


return 0;
}