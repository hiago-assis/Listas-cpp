#include <iostream>
#include <cmath>
using namespace std;

struct Ponto{
    int x;
    int y;
};

float distanciaEntrePontos(Ponto p1, Ponto p2);

int main(){
    Ponto p1, p2;

    cout << "Digite o primeiro ponto x: ";
    cin >> p1.x;

    cout << "Digite o primeiro ponto y: ";
    cin >> p1.y;

    cout << "Digite o segundo ponto x: ";
    cin >> p2.x;

    cout << "Digite o segundo ponto y: ";
    cin >> p2.y;

    cout << "Distancia entre os pontos: " << distanciaEntrePontos(p1, p2);

    return 0;
}

float distanciaEntrePontos(Ponto p1, Ponto p2){

    float variacaoX = p2.x - p1.x;
    float variacaoY = p2.y - p1.y;

    variacaoX = pow(variacaoX, 2);
    variacaoY = pow(variacaoY, 2);

    float resultado = sqrt(variacaoX + variacaoY);

    return resultado;
}