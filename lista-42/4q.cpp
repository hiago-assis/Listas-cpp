
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct Sensor
{
    int indentificador;
    int leitura;
};

int main()
{
    int n;
    int m;

    cout << "Digite a quantidade inicial de sensores: ";
    cin >> n;

    Sensor *p = (Sensor *)malloc(n * sizeof(Sensor));

    for (int i = 0; i < n; i++)
    {
        cout << "Sensor " << i + 1 << endl;

        cout << "Digite o identificador: ";
        cin >> (p + i)->indentificador;

        cout << "Digite a leitura: ";
        cin >> (p + i)->leitura;
    }

    cout << "Digite a nova quantidade de sensores: ";
    cin >> m;

    while (m <= n)
    {
        cout << "Digite novamente! A quantidade deve ser maior que " << n << ": ";
        cin >> m;
    }

    Sensor *pNovo = (Sensor *)realloc(p, m * sizeof(Sensor));

    if (pNovo == NULL)
    {
        cout << "Erro ao realocar memoria!" << endl;
        free(p);
        return 1;
    }

    p = pNovo;

    for (int i = n; i < m; i++)
    {
        cout << "Novo sensor " << i + 1 << endl;

        cout << "Digite o identificador: ";
        cin >> (p + i)->indentificador;

        cout << "Digite a leitura: ";
        cin >> (p + i)->leitura;
    }

    cout << "Sensores: ";

    for (int i = 0; i < m; i++)
    {
        cout << "Identificador numero " << i + 1 << ": " << (p + i)->indentificador << endl;

        cout << "Leitura numero " << i + 1 << ": " << (p + i)->leitura << endl;
    }

    free(p);

    return 0;
}
