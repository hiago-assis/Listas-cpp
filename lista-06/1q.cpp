#include <iostream>
using namespace std;

int main() {
    int opcao;
    double media, frequencia;
    int atividades, reprovacoes;

    cout << "1 - Verificar aprovacao" << "\n";
    cout << "2 - Verificar elegibilidade para monitoria" << "\n";
    cout << "3 - Verificar necessidade de recuperacao" << "\n";
    cout << "4 - Sair" << "\n";
    cout << "Escolha uma opcao: ";
    cin >> opcao;

 switch (opcao) {
        case 1:
            cout << "Informe a media final do estudante: ";
            cin >> media;
            cout << "Informe a frequencia percentual: ";
            cin >> frequencia;
            cout << "Informe a quantidade de atividades entregues: ";
            cin >> atividades;

        if(media >= 7.0 && frequencia >= 75 && atividades >= 8){
            cout << "Aprovado";
        }else{
            cout << "Reprovado";
        }
            break;
        case 2:

            cout << "Informe a media final do estudante: ";
            cin >> media;
            cout << "Informe a frequencia percentual: ";
            cin >> frequencia;
            cout << "Informe a quantidade de atividades entregues: ";
            cin >> atividades;
            cout << "Informe a quantidade de reprovacoes anteriores na disciplina: ";
            cin >> reprovacoes;


        if(media >= 8.0 && frequencia >= 85 && atividades >= 10 && reprovacoes == 0){
            cout << "Estudante elegivel para monitoria";
        }else{
            cout << "Estudante nao elegivel para monitoria";
        }
            break;

        case 3:
            cout << "Informe a media final do estudante: ";
            cin >> media;
            cout << "Informe a frequencia percentual: ";
            cin >> frequencia;
            cout << "Informe a quantidade de atividades entregues: ";
            cin >> atividades;

            if (media >= 4.0 && media < 7.0 && frequencia >= 75 && atividades >= 6) {
                cout << "Estudante precisa de recuperacao";
            } else {
                cout << "Estudante nao precisa de recuperacao";
            }
            break;


        case 4:
            cout << "Encerrando o programa";
            break;

        default:
            cout << "Opcao invalida";
            break;

 }

    return 0;
}

