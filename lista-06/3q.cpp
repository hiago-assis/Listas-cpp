#include <iostream>
using namespace std;

int main() {
    int opcao, idade, nivelAcesso, mesesTrabalhados, treinamento, horario;

    cout << "1 - Acessar area administrativa" << "\n";
    cout << "2 - Acessar laboratorio" << "\n";
    cout << "3 - Acessar sala de servidores" << "\n";
    cout << "4 - Sair" << "\n";
    cout << "Escolha uma opcao: ";
    cin >> opcao;

    switch (opcao) {
        case 1:
            cout << "Informe a idade do funcionario: ";
            cin >> idade;
            cout << "Informe o nivel de acesso (1 a 5): ";
            cin >> nivelAcesso;
            cout << "Informe a quantidade de meses trabalhando na empresa: ";
            cin >> mesesTrabalhados;
            cout << "Informe se realizou treinamento de seguranca (1-Sim, 0-Nao): ";
            cin >> treinamento;
            cout << "Informe o horario atual (0 a 23): ";
            cin >> horario;
 
        if(nivelAcesso >= 2 && mesesTrabalhados >= 3 && (horario >= 6 && horario <= 22)){
                cout << "Acesso liberado";
        }else {
            cout << "Acesso negado";
        }
            break;

         case 2:
            cout << "Informe a idade do funcionario: ";
            cin >> idade;
            cout << "Informe o nivel de acesso (1 a 5): ";
            cin >> nivelAcesso;
            cout << "Informe a quantidade de meses trabalhando na empresa: ";
            cin >> mesesTrabalhados;
            cout << "Informe se realizou treinamento de seguranca (1-Sim, 0-Nao): ";
            cin >> treinamento;
            cout << "Informe o horario atual (0 a 23): ";
            cin >> horario;

            if (nivelAcesso >= 3 && treinamento == 1 && mesesTrabalhados >= 6 && idade >= 18) {
                cout << "Acesso permitido";
            } else {
                cout << "Acesso negado";
            }
            break;

        case 3:
            cout << "Informe a idade do funcionario: ";
            cin >> idade;
            cout << "Informe o nivel de acesso (1 a 5): ";
            cin >> nivelAcesso;
            cout << "Informe a quantidade de meses trabalhando na empresa: ";
            cin >> mesesTrabalhados;
            cout << "Informe se realizou treinamento de seguranca (1-Sim, 0-Nao): ";
            cin >> treinamento;
            cout << "Informe o horario atual (0 a 23): ";
            cin >> horario;

            if (nivelAcesso >= 4 && treinamento == 1 && mesesTrabalhados >= 12 &&
                (horario >= 8 && horario <= 18) && idade >= 21) {
                cout << "Acesso permitido";
            } else {
                cout << "Acesso negado";
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