#include <iostream>
#include <string>
using namespace std;

struct Funcionario
{
    int matricula;
    string nome;
    float salario;
};

const int TAM = 5;

Funcionario *menorSalario(Funcionario *p, int quantidadeFuncionarios);

int main(){
    Funcionario f[TAM];
    Funcionario *p = f;

    
    for(int i = 0; i < TAM; i++){
        cout << "Digite a matricula: ";
        cin >> (p + i)->matricula;

        cout << "Digite o nome: ";
        cin >> (p + i)->nome;

        cout << "Digite o salario: ";
        cin >> (p + i)->salario;
    }

    Funcionario *menor = menorSalario(p, TAM);

    cout << "Funcionario com menor salario" << endl;
    cout << "Matricula: " << menor->matricula << endl;
    cout << "Nome: " << menor->nome << endl;
    cout << "Salario: " << menor->salario << endl;

    return 0;
}

Funcionario *menorSalario(Funcionario *p, int quantidadeFuncionarios){

    Funcionario *aux = p;

    for(int i = 0; i < quantidadeFuncionarios; i++){
        if((p + i)->salario < aux->salario){
            aux = p + i;
        }
    }

    return aux;
}