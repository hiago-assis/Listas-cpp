#include <iostream>
using namespace std;

int main() {

    int opcao;
    double qntdFaltas;
    double cargaHoraria;
    double frequenciaPercentual;
    double notaUm;
    double notaDois;
    double media;
    string nomeAluno;
    string situacaoFinal;

    cout << "Informe o nome do aluno: ";
    cin >> nomeAluno;
    cout << "Informe a primeira nota do aluno: ";
    cin >> notaUm;
    cout << "Informe a segunda nota do aluno: ";
    cin >> notaDois;
    cout << "Informe a quantidade de faltas: ";
    cin >> qntdFaltas;
    cout << "Informe a carga horario da disciplina: ";
    cin >> cargaHoraria;

    media = (notaUm + notaDois) / 2;
    frequenciaPercentual = ((cargaHoraria - qntdFaltas) / cargaHoraria) * 100 ;

    cout << "1 - Exibir media do aluno" << "\n";
    cout << "2 - Exibir percentual de frequencia " << "\n";
    cout << "3 - Exibir situacao final " << "\n";
    cout << "4 - Exibir relatorio completo " << "\n";
    cout << "Escolha uma opcao: ";
    cin >> opcao;

        if(media >= 7.0){
            situacaoFinal = "Aprovado";
        }else if(media >= 5.0 && media <= 6.9){
                situacaoFinal = "Recuperacao";
        }else if(media < 5.0){
                situacaoFinal = "Reprovado por nota";
        }else if(frequenciaPercentual < 75.0){
                situacaoFinal = "Reprovado por frequencia";
        }

    switch(opcao){
        case 1:
            cout << "A media do aluno e: " << media;
            break;
        case 2: 
            cout << "O percentual de frequencia do aluno e: " << frequenciaPercentual << "%";
            break;
        case 3:
            cout << situacaoFinal;
            break;
        case 4:
            cout << "A nome do aluno e: " << nomeAluno << "\n";
            cout << "A carga horaria da disciplina e: " << cargaHoraria << "\n";
            cout << "O quantidade de faltas do aluno e: " << qntdFaltas << "\n";
            cout << "O percentual de frequencia e: " << frequenciaPercentual << "%" << "\n";
            cout << "A primeira nota do aluno e: " << notaUm << "\n";
            cout << "A segunda nota do aluno e: " << notaDois << "\n";
            cout << "A media do aluno e: " << media << "\n";
            cout << "O aluno esta: " << situacaoFinal << "\n";
            
            break;


        default:
            cout << "Opcao incorreta";
            break;



    }

    return 0;


}