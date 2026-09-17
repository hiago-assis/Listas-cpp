#include <iostream>
using namespace std;


// Com for
int main() {

    double temperatura;
    int temperaturaAcimaDe30 = 0;
    double somaTemperatura;
    double mediaTemperatura;
    double menorTemperatura;
    int i = 1;

    
    do{

        cout <<"Digite a temperatura do dia: ";
        cin >> temperatura;

        somaTemperatura += temperatura;

         if (i == 1) {
            menorTemperatura = temperatura;
        } else if (temperatura < menorTemperatura) {
            menorTemperatura = temperatura;
        } 

        if(temperatura > 30){
            temperaturaAcimaDe30++;
        }

        i++;
        
        
    }while(i <= 7);

    mediaTemperatura = somaTemperatura / 7;

    cout << "A media da temperatura e: " << mediaTemperatura << "\n";
    cout << "A quantidade de dias com temperatura acima de 30 graus e: " << temperaturaAcimaDe30 << "\n";
    cout << "Menor temperatura registrada: " << menorTemperatura << "\n";


return 0;
}