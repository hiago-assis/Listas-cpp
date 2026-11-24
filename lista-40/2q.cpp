#include <iostream>
using namespace std;

struct Retangulo
{
    int base;
    int altura;
};

int calcularArea(Retangulo r);
int calcularPerimetro(Retangulo r);

int main()
{
    Retangulo r;

    cout << "Digite a base do retangulo: ";
    cin >> r.base;

    cout << "Digite a altura do retangulo: ";
    cin >> r.altura;

    cout << "A area do retangulo e: " << calcularArea(r) << endl;
    cout << "O perimetro do retangulo e: " << calcularPerimetro(r);
}

int calcularArea(Retangulo r)
{
    int area = r.base * r.altura;

    return area;
}

int calcularPerimetro(Retangulo r)
{

    int perimetro = (r.base + r.altura) * 2;

    return perimetro;
}
