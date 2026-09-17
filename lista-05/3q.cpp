#include <iostream>
using namespace std;

int main() {
    
    double salario, prestacao, valorEntrada, valorVeiculo, limitePrestacao;      
    int idade, pontuacaoCredito, tempoEmprego;        

    
    cout << "Informe o salario mensal: R$ ";
    cin >> salario;

    cout << "Informe o valor da prestacao pretendida: R$ ";
    cin >> prestacao;

    cout << "Informe a idade do cliente: ";
    cin >> idade;

    cout << "Informe a pontuacao de credito (0 a 1000): ";
    cin >> pontuacaoCredito;

    cout << "Informe o tempo de emprego atual (em meses): ";
    cin >> tempoEmprego;

    cout << "Informe o valor da entrada: R$ ";
    cin >> valorEntrada;

    cout << "Informe o valor total do veiculo: R$ ";
    cin >> valorVeiculo;


    limitePrestacao= salario * 0.30;

    if (pontuacaoCredito < 600 ||
        idade < 18 ||
        idade > 70 ||
        prestacao > salario * 0.40) {

        cout << "\nFINANCIAMENTO RECUSADO - REGRAS DE ELEGIBILIDADE" << endl;
    }
    else if (prestacao > salario * 0.30) {

        cout << "\nFINANCIAMENTO RECUSADO - COMPROMETIMENTO DE RENDA" << endl;
    }
    else if (
        (pontuacaoCredito >= 750 && tempoEmprego >= 12) ||
        (pontuacaoCredito >= 650 && pontuacaoCredito <= 749 &&
         tempoEmprego >= 24 &&
         valorEntrada >= valorVeiculo * 0.30)           ||
        (pontuacaoCredito >= 600 &&
         valorEntrada >= valorVeiculo * 0.50 &&
         idade >= 25 && idade <= 60)
    ) {
        cout << "\nFINANCIAMENTO APROVADO" << endl;
    }
    else {
        cout << "\nFINANCIAMENTO RECUSADO - PERFIL DE CREDITO" << endl;
    }


    return 0;

    }






    