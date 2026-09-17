#include <iostream>
using namespace std;

int main() {
    int idade, horasTreinamento, qtdIdiomas, experiencia;
    double notaFisico, notaTecnico, notaPsicologico;
    string classificacao;

    cout << "Informe a idade do candidato: ";
    cin >> idade;

    cout << "Informe o numero de horas de treinamento: ";
    cin >> horasTreinamento;

    cout << "Informe a nota no teste fisico (0 a 100): ";
    cin >> notaFisico;

    cout << "Informe a nota no teste tecnico (0 a 100): ";
    cin >> notaTecnico;

    cout << "Informe a nota no teste psicologico (0 a 100): ";
    cin >> notaPsicologico;

    cout << "Informe a quantidade de idiomas estrangeiros dominados: ";
    cin >> qtdIdiomas;

    cout << "Informe a experiencia previa em missoes (em meses): ";
    cin >> experiencia;

    if (idade < 28 || idade > 50 || horasTreinamento < 1000 ||
        notaFisico < 70 || notaTecnico < 70 || notaPsicologico < 70) {

        classificacao = "Candidato Inapto";
    }
    else if (idade > 45 && experiencia < 12 && notaTecnico < 95) {

        classificacao = "Candidato Inapto";
    }
    else if (notaFisico >= 85 && notaTecnico >= 90 && notaPsicologico >= 85 &&
             qtdIdiomas >= 2 && experiencia >= 6 && notaPsicologico >= 75) {

        classificacao = "Prioridade 1";
    }
    else if (((notaFisico + notaTecnico + notaPsicologico) / 3) >= 80 && qtdIdiomas >= 1) {

        classificacao = "Prioridade 2";
    }
    else {
        classificacao = "Prioridade 3";
    }

    cout << "Resultado: " << classificacao;

    return 0;
}