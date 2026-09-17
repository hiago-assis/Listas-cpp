#include <iostream>
using namespace std;

int main() {
    int opcao, idade, freqCardiaca, treinos;
    double tempo2km, freqAtividades;

    cout << "1 - Selecao para corrida\n";
    cout << "2 - Selecao para natacao\n";
    cout << "3 - Selecao para competicao de resistencia\n";
    cout << "4 - Sair\n";
    cout << "Escolha uma opcao: ";
    cin >> opcao;

    switch (opcao) {
        case 1:
            cout << "Informe a idade: ";
            cin >> idade;
            cout << "Informe a frequencia cardiaca em repouso: ";
            cin >> freqCardiaca;
            cout << "Informe o tempo para completar 2 km (em minutos): ";
            cin >> tempo2km;
            cout << "Informe a quantidade de treinos realizados no ultimo mes: ";
            cin >> treinos;

            if (idade >= 18 && idade <= 55 && (freqCardiaca >= 50 && freqCardiaca <= 90) &&
                tempo2km <= 15 && treinos >= 8) {
                cout << "APTO";
            } else {
                cout << "NAO APTO";
            }
            break;

        case 2:
            cout << "Informe a idade: ";
            cin >> idade;
            cout << "Informe o percentual de frequencia nas atividades: ";
            cin >> freqAtividades;
            cout << "Informe a quantidade de treinos realizados no ultimo mes: ";
            cin >> treinos;
            cout << "Informe a frequencia cardiaca em repouso: ";
            cin >> freqCardiaca;

            if (idade >= 16 && idade <= 60 && freqAtividades >= 75 &&
                treinos >= 6 && freqCardiaca <= 95) {
                cout << "APTO";
            } else {
                cout << "NAO APTO";
            }
            break;

        case 3:
            cout << "Informe a idade: ";
            cin >> idade;
            cout << "Informe a frequencia cardiaca em repouso: ";
            cin >> freqCardiaca;
            cout << "Informe o tempo para completar 2 km (em minutos): ";
            cin >> tempo2km;
            cout << "Informe a quantidade de treinos realizados no ultimo mes: ";
            cin >> treinos;
            cout << "Informe o percentual de frequencia nas atividades: ";
            cin >> freqAtividades;

            if (idade >= 20 && idade <= 45 && (freqCardiaca >= 50 && freqCardiaca <= 80) &&
                tempo2km <= 12 && treinos >= 12 && freqAtividades >= 85) {
                cout << "APTO";
            } else {
                cout << "NAO APTO";
            }
            break;

        case 4:
            break;

        default:
            cout << "Opcao invalida";
            break;
    }

    return 0;
}