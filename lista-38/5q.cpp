#include <iostream>
#include <string>
using namespace std;

struct Funcionario {
    string nome;
    float salario;
};

void exibirFuncionario(Funcionario f);

int main(){

    Funcionario func;

    cout << "Digite o nome do funcionario: ";
    getline(cin, func.nome);

    cout << "Digite o salario do funcionario: ";
    cin >> func.salario;

    exibirFuncionario(func);

    return 0;
}

void exibirFuncionario(Funcionario f){
    cout << "Nome: " << f.nome << endl;
    cout << "Salario: " << f.salario << endl;
}