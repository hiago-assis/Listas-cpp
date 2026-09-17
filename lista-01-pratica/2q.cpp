#include <iostream>
using namespace std;

int main() {


    double qntdHoras;
    int tipoVeiculo;
    int opcao;
    double valorBasico;
    double taxa;
    double valorFinal;
    double desconto;
    char perdaTicket;
    char mensalista;


    cout << "Digite quantas horas o carro ficou estacionado: ";
    cin >> qntdHoras;
    cout << "Qual o tipo de veiculo?(1- Moto, 2- Carro, 3-SUV/utilitario): ";
    cin >> tipoVeiculo;



    if(tipoVeiculo == 1 && qntdHoras <= 2){
            valorBasico = 4.00;
    }else if(tipoVeiculo == 1 && qntdHoras > 2){
            valorBasico = 4 + (qntdHoras - 2) * 2;
    }

    if(tipoVeiculo == 2 && qntdHoras <= 2){
        valorBasico = 8.00;
    }else if(tipoVeiculo == 2 && qntdHoras > 2){
        valorBasico = 8 + (qntdHoras - 2) * 3;
    }

    if(tipoVeiculo == 3 && qntdHoras <= 2){
        valorBasico = 12.00;
    }else if(tipoVeiculo == 3 && qntdHoras > 2){
        valorBasico = 12 + (qntdHoras - 2) * 4;
    }
    

    cout << "1 - Consultar valor básico" << "\n";
    cout << "2 - Consultar desconto" << "\n";
    cout << "3 - Consultar taxas adicionais" << "\n";
    cout << "4 - Calcular valor final" << "\n";
    cout << "0 - Sair" << "\n";
    cout << "Escolha uma opcao: ";
    cin >> opcao;

    switch(opcao){
        case 1:
            cout << "O valor basico e:" << valorBasico;
            break;
        case 2: 
            cout << "O cliente é mensalista?(S ou N):";
            cin >> mensalista;
             if (mensalista == 'S' || mensalista == 's') {
                cout << "Desconto: 20%";
            } else {
                cout << "Desconto: 0%";
            }
            break;
        case 3:
                cout << "O cliente perdeu o ticket?(S ou N):";
                cin >> perdaTicket;
                  if (perdaTicket == 'S' || perdaTicket == 's') {
                cout << "Taxa adicional: R$ 30,00";
                } else {
                cout << "Taxa adicional: R$ 0,00";
            }
            break;
        case 4:
            cout << "O cliente e mensalista?(S ou N):";
            cin >> mensalista;
            cout << "O cliente perdeu o ticket?(S ou N):";
            cin >> perdaTicket;

            if (mensalista == 'S' || mensalista == 's') {
                desconto = valorBasico * 0.20;
            } else {
                desconto = 0;
            }

            if (perdaTicket == 'S' || perdaTicket == 's') {
                taxa = 30.00;
            } else {
                taxa = 0;
            }

            valorFinal = (valorBasico - desconto) + taxa;

            cout << "O valor final e: R$ " << valorFinal;

            break;
        
        case 0:
            break;

        default: 
            cout << "Opcao invalida";
            break;
    }

    return 0;

}