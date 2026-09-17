#include <iostream>
using namespace std;

int main() {
    int opcao, distancia, prazo, fragil;
    double peso, valorDeclarado;

    cout << "1 - Verificar entrega expressa\n";
    cout << "2 - Verificar entrega convencional\n";
    cout << "3 - Verificar necessidade de tratamento especial\n";
    cout << "4 - Sair\n";
    cout << "Escolha uma opcao: ";
    cin >> opcao;

    switch (opcao) {
        case 1:
            cout << "Informe o peso da encomenda em quilogramas: ";
            cin >> peso;
            cout << "Informe a distancia da entrega em quilometros: ";
            cin >> distancia;
            cout << "Informe a quantidade de dias disponiveis para entrega: ";
            cin >> prazo;
            cout << "Produto fragil? (1-Sim, 0-Nao): ";
            cin >> fragil;

            if (peso <= 10 && distancia <= 300 && prazo <= 2 && fragil == 0) {
                cout << "Entrega expressa disponivel";
            } else {
                cout << "Entrega expressa nao disponivel";
            }
            break;

        case 2:
            cout << "Informe o peso da encomenda em quilogramas: ";
            cin >> peso;
            cout << "Informe a distancia da entrega em quilometros: ";
            cin >> distancia;
            cout << "Informe a quantidade de dias disponiveis para entrega: ";
            cin >> prazo;

            if (peso <= 30 && distancia <= 1000 && prazo >= 3) {
                cout << "Entrega convencional adequada";
            } else {
                cout << "Entrega convencional nao adequada";
            }
            break;

        case 3:
            cout << "Informe o peso da encomenda em quilogramas: ";
            cin >> peso;
            cout << "Informe a distancia da entrega em quilometros: ";
            cin >> distancia;
            cout << "Informe o valor declarado da mercadoria: R$ ";
            cin >> valorDeclarado;
            cout << "Informe a quantidade de dias disponiveis para entrega: ";
            cin >> prazo;
            cout << "Produto fragil? (1-Sim, 0-Nao): ";
            cin >> fragil;

            if ((peso > 30 || valorDeclarado > 5000 || fragil == 1) &&
                distancia <= 1500 && prazo >= 2) {
                cout << "Necessita tratamento especial";
            } else {
                cout << "Nao necessita tratamento especial";
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
