#include <iostream>
using namespace std;


int lerOpcao() {
    int opcao;

    do {
        cout << "\nEscolha uma das opcoes abaixo:" << endl;
        cout << "1 - Somar dois numeros" << endl;
        cout << "2 - Calcular a media de tres numeros" << endl;
        cout << "3 - Exibir os numeros de 1 ate N" << endl;
        cout << "0 - Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        if (opcao < 0 || opcao > 3) {
            cout << "Opcao invalida! Tente novamente." << endl;
        }

    } while (opcao < 0 || opcao > 3);

    return opcao;
}


int somarDoisNumeros(){
    float a;
    float b;

    cout << "Digite o primeiro numero: ";
    cin >> a;
    cout << "Digite o segundo numero: ";
    cin >> b;

    return a + b;
}

int calcularMedia(){

    float x, y, z;

    cout << "Digite o primeiro numero: ";
    cin >> x;
    cout << "Digite o segundo numero: ";
    cin >> y;
    cout << "Digite o terceiro numero: ";
    cin >> z;

    return (x + y + z) / 3.0;
}

int lerN() {
    int n;

    do {
        cout << "Digite um valor de N (positivo): ";
        cin >> n;

        if (n <= 0) {
            cout << "Valor invalido! N deve ser positivo." << endl;
        }

    } while (n <= 0);

    return n;
}

void exibirNumeros(int n) {
    cout << "Numeros de 1 ate " << n << ": ";
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
}

int main(){

        int opcao;

    do{
        opcao = lerOpcao();

        switch (opcao) {

            case 1: {
                float soma = somarDoisNumeros();
                cout << "Resultado da soma: " << soma << endl;
                break;
            }

            case 2: {
                float media = calcularMedia();
                cout << "Media dos tres numeros: " << media << endl;
                break;
            }

            case 3: {
                int n = lerN();
                exibirNumeros(n);
                break;
                break;
            }

            case 0:
                cout << "Programa encerrado." << endl;
                break;
        }

    }while(opcao != 0);

    return 0;
}