#include <iostream>
using namespace std;

int main() {
    int opcao, idade, tempoEmprego, pontuacaoCredito;
    double renda, prestacao, limitePrestacao;

    cout << "1 - Analisar emprestimo pessoal" << endl;
    cout << "2 - Analisar financiamento de veiculo" << endl;
    cout << "3 - Analisar credito especial" << endl;
    cout << "4 - Sair" << endl;
    cout << "Escolha uma opcao: ";
    cin >> opcao;

    

    switch (opcao) {
        case 1:

            cout << "Informe a renda mensal: R$ ";
            cin >> renda;
            cout << "Informe o valor da prestacao solicitada: R$ ";
            cin >> prestacao;
            cout << "Informe a pontuacao de credito (0 a 1000): ";
            cin >> pontuacaoCredito;
            cout << "Informe o tempo de emprego atual (em meses): ";
            cin >> tempoEmprego;


            limitePrestacao = renda * 0.30;

            if(renda >= 2500 && prestacao <= limitePrestacao && pontuacaoCredito >= 650 && tempoEmprego >= 6){
                    cout << "Emprestimo aprovado";
            }else{
                    cout << "Emprestimo negado";
            }

            break;

        case 2:
            cout << "Informe a idade do cliente: ";
            cin >> idade;
            cout << "Informe a pontuacao de credito (0 a 1000): ";
            cin >> pontuacaoCredito;
            cout << "Informe a renda mensal: R$ ";
            cin >> renda;
            cout << "Informe o valor da prestacao solicitada: R$ ";
            cin >> prestacao;
            cout << "Informe o tempo de emprego atual (em meses): ";
            cin >> tempoEmprego;

            limitePrestacao = renda * 0.35;

        if((idade >= 21 && idade <= 65) && prestacao <= limitePrestacao && pontuacaoCredito >= 700 && tempoEmprego >= 12){
                cout << "Financiamento aprovado";
        }else{
                cout << "Financiamento negado";
        }
            break;

        case 3:
            cout << "Informe a renda mensal: R$ ";
            cin >> renda;
            cout << "Informe a pontuacao de credito (0 a 1000): ";
            cin >> pontuacaoCredito;
            cout << "Informe o tempo de emprego atual (em meses): ";
            cin >> tempoEmprego;
            cout << "Informe o valor da prestacao solicitada: R$ ";
            cin >> prestacao;

            limitePrestacao = renda * 0.25;

            if(renda >= 5000 && prestacao <= limitePrestacao && pontuacaoCredito >= 800 && tempoEmprego >= 24){
                    cout << "Emprestimo aprovado";
            }else{
                    cout << "Emprestimo negado";
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