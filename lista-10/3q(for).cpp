#include <iostream>
using namespace std;

int main() {

    double consumo[6];
    double soma = 0;
    int mesesAcimaMedia = 0;

    for (int mes = 0; mes < 6; mes++) {

        cout << "Digite o consumo do mes " << (mes + 1) << " (em kWh): ";
        cin >> consumo[mes];

        soma += consumo[mes];

    }

    double media = soma / 6;

    for (int mes = 0; mes < 6; mes++) {
        if (consumo[mes] > media) {
            mesesAcimaMedia++;
        }
    }

    cout << "\nConsumo total do periodo: " << soma << " kWh\n";
    cout << "Media mensal: " << media << " kWh\n";
    cout << "Quantidade de meses com consumo superior a media: " << mesesAcimaMedia;

    return 0;
}