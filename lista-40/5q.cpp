
#include <iostream>
using namespace std;

struct Tempo
{
    int horas;
    int minutos;
    int segundos;
};

void acrescentarSegundo(Tempo *t);

int main()
{
    Tempo t;

    cout << "Digite as horas: ";
    cin >> t.horas;

    cout << "Digite os minutos: ";
    cin >> t.minutos;

    cout << "Digite os segundos: ";
    cin >> t.segundos;

    acrescentarSegundo(&t);

    cout << "Novo horario: ";

    if (t.horas < 10) cout << "0";
    cout << t.horas << ":";

    if (t.minutos < 10) cout << "0";
    cout << t.minutos << ":";

    if (t.segundos < 10) cout << "0";
    cout << t.segundos << endl;
}

void acrescentarSegundo(Tempo *t)
{
    t->segundos = t->segundos + 1;

    if (t->segundos == 60)
    {
        t->segundos = 0;
        t->minutos += 1;

        if (t->minutos == 60)
        {
            t->minutos = 0;
            t->horas += 1;

            if (t->horas == 24)
            {
                t->horas = 0;
            }
        }
    }
}
