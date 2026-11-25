#include <iostream>
using namespace std;

struct Ponto
{
    int x;
    int y;
};

void troca(Ponto *p1, Ponto *p2);

int main()
{
    Ponto p1, p2;

    cout << "Digite o primeiro ponto x: ";
    cin >> p1.x;

    cout << "Digite o primeiro ponto y: ";
    cin >> p1.y;

    cout << "Digite o segundo ponto x: ";
    cin >> p2.x;

    cout << "Digite o segundo ponto y: ";
    cin >> p2.y;

    cout << "Antes da troca: " << p1.x << " " << p1.y << endl;

    cout << "Antes da troca: " << p2.x << " " << p2.y << endl;

    troca(&p1, &p2);

    cout << "Apos a troca: " << p1.x << " " << p1.y << endl;

    cout << "Apos a troca: " << p2.x << " " << p2.y << endl;

    return 0;
}

void troca(Ponto *p1, Ponto *p2)
{
    int aux = p1->x;
    p1->x = p2->x;
    p2->x = aux;

    aux = p1->y;
    p1->y = p2->y;
    p2->y = aux;
}
