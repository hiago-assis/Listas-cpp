#include <iostream>
using namespace std;

int main() {

    int opcao;
    int idade;
    int tempoEmprego;
    double valorSolicitado;
    int qtdParcelas;
    double valorParcela;
    double rendaMensal;
    char divida;

    cout << "Informe o valor solicitado: ";
    cin >> valorSolicitado;
    cout << "Informe a quantidade de parcelas: ";
    cin >> qtdParcelas;
    cout << "Informe a renda mensal: ";
    cin >> rendaMensal;

    valorParcela = valorSolicitado / qtdParcelas;

    cout << "1 - Calcular valor da parcela " << "\n";
    cout << "2 - Verificar comprometimento da renda" << "\n";
    cout << "3 - Realizar análise de crédito" << "\n";
    cout << "4 - Exibir relatório da análise" << "\n";
    cout << "0 - Sair" << "\n";
    cout << "Escolha uma opcao: ";
    cin >> opcao;



    switch(opcao){

        case 1:

            cout << "Valor da parcela: " << valorParcela;
            break;
        case 2:

            if (valorParcela <= rendaMensal * 0.30) {
                cout << "Comprometimento de renda dentro do limite";
            } else {
                cout << "Comprometimento de renda acima do limite";
            }
            break;

            case 3:
            cout << "Informe a idade: ";
            cin >> idade;
            cout << "O cliente possui divida em atraso? (S/N): ";
            cin >> divida;
            cout << "Informe o tempo de vinculo empregaticio (em meses): ";
            cin >> tempoEmprego;

            

            if (idade < 18 || rendaMensal <= 0) {
                cout << "Cliente nao pode ser analisado";
            }
            else if (divida == 'S' || divida == 's') {
                cout << "Reprovado: possui divida em atraso";
            }
            else if (tempoEmprego < 12) {
                cout << "Reprovado: tempo de emprego insuficiente";
            }
            else if (valorParcela > rendaMensal * 0.30) {
                cout << "Reprovado: comprometimento de renda acima do limite";
            }
            else {
                cout << "Credito aprovado";
            }
            break;

            case 4:
            cout << "Informe a idade: ";
            cin >> idade;
            cout << "O cliente possui divida em atraso? (S/N): ";
            cin >> divida;
            cout << "Informe o tempo de vinculo empregaticio (em meses): ";
            cin >> tempoEmprego;


            cout << "\n--- Relatorio da analise ---\n";
            cout << "Idade: " << idade << "\n";
            cout << "Renda mensal: R$ " << rendaMensal << "\n";
            cout << "Valor solicitado: R$ " << valorSolicitado << "\n";
            cout << "Quantidade de parcelas: " << qtdParcelas << "\n";
            cout << "Valor da parcela: R$ " << valorParcela << "\n";
            cout << "Possui divida em atraso: " << divida << "\n";
            cout << "Tempo de emprego: " << tempoEmprego << " meses\n";

            if (idade < 18 || rendaMensal <= 0) {
                cout << "Resultado: Cliente nao pode ser analisado";
            }
            else if (divida == 'S' || divida == 's') {
                cout << "Resultado: Reprovado - possui divida em atraso";
            }
            else if (tempoEmprego < 12) {
                cout << "Resultado: Reprovado - tempo de emprego insuficiente";
            }
            else if (valorParcela > rendaMensal * 0.30) {
                cout << "Resultado: Reprovado - comprometimento de renda acima do limite";
            }
            else {
                cout << "Resultado: Credito aprovado";
            }
            break;

            case 0:
            break;

        default:
            cout << "Opcao invalida";
            break;


    }

    return 0;

}