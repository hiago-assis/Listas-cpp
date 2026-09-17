#include <iostream>
using namespace std;

int main() {
    double media, renda;
    int frequencia, reprovacoes;
    char projetoPesquisa;

    cout << "Digite a media geral do estudante: ";
    cin >> media;

    cout << "Digite o percentual de frequencia: ";
    cin >> frequencia;

    cout << "Digite a renda familiar mensal: ";
    cin >> renda;

    cout << "Digite a quantidade de reprovacoes: ";
    cin >> reprovacoes;

    cout << "Participa de algum projeto de pesquisa ou extensao? (S/N): ";
    cin >> projetoPesquisa;

    if ((frequencia >= 60 && reprovacoes < 3) &&
        (media >= 7.0 && frequencia >= 75 && reprovacoes <= 1) &&
        (
            (renda <= 3000.00) ||
            (media >= 8.5) ||
            (projetoPesquisa == 'S' || projetoPesquisa == 's')
        )
    ) {
        cout << "APTO" << "\n";
    } else {
        cout << "INAPTO" << "\n";
    }

    return 0;
}