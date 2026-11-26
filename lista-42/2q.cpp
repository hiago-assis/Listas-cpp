#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct Temperatura
{
    string cidade;
    float valorTemperatura;
};

int main(){
    int n;
    float soma = 0;
    float media;
    int acimaMedia = 0;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    Temperatura *p = (Temperatura*) malloc(n * sizeof(Temperatura));

    for(int i = 0; i < n; i++){
        cout << "Digite o nome da cidade: ";
        cin >> (p + i)->cidade;

        cout << "Digite a temperatura: ";
        cin >> (p + i)->valorTemperatura;

        soma += (p + i)->valorTemperatura;
    }

    media = soma / n;

    for(int i = 0; i < n; i++){
        if((p + i)->valorTemperatura > media){
            acimaMedia++;
        }
    }

    cout << "Media das temperaturas: " << media << endl;
    cout << "Quantidade de cidades acima da media: " << acimaMedia << endl;

    free(p);

    return 0;
}