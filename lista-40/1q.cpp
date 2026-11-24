#include <iostream>
using namespace std;

struct Data
{
    int dia;
    int mes;
    int ano;
};

int semestreAtual(Data d);

int main()
{
    Data d;
    int semestre;

    cout << "Digite o dia: ";
    cin >> d.dia;

    cout << "Digite o mes: ";
    cin >> d.mes;

    cout << "Digite o ano: ";
    cin >> d.ano;

    semestre = semestreAtual(d);

    if(semestre == 0){
        cout << "Pertence ao primeiro semestre do ano";
    }else{
        cout << "Pertence ao segundo semestre do ano";
    }

    return 0;
}

int semestreAtual(Data d){
    if(d.mes <= 6){
        return 0;
    }else{
        return 1;
    }
}