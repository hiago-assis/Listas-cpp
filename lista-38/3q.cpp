#include <iostream>
using namespace std;

struct Retangulo {
    float base;
    float altura;
};

int main(){

    Retangulo r;
    float area;
    float perimetro;

    cout << "Digite a base do retangulo: ";
    cin >> r.base;

    cout << "Digite a altura do retangulo: ";
    cin >> r.altura;

    area = r.base * r.altura;
    perimetro = 2 * (r.base + r.altura);

    cout << "Base: " << r.base << endl;
    cout << "Altura: " << r.altura << endl;
    cout << "Area: " << area << endl;
    cout << "Perimetro: " << perimetro << endl;

    return 0;
}