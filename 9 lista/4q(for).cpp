#include <iostream>
using namespace std;


// Com for
int main() {

    double nota;
    double somaNotas = 0.00;
    double media;
    int quantidadeAlunos = 0;
    int notaMaiorQue7= 0;

    for(int i = nota; i != -1; i = nota){

        cout << "Digite a nota de 1 a 10(digite -1 para sair): ";
        cin >> nota;

        if(nota > 10){
            cout << "Digite novamente a nota respeitando o limite entre 1 a 10:";
            cin >> nota;
        }

        if(nota != -1){
            somaNotas += nota;
            quantidadeAlunos++;
        }

        if(nota >= 7){
            notaMaiorQue7++;
        }

        
    }

    media = somaNotas / quantidadeAlunos;
    
    cout << "A quantidade de alunos e: " << quantidadeAlunos << "\n";
    cout << "A media das notas e: " << media << "\n";
    cout << "Nota maior que 7: " << notaMaiorQue7;
 

    return 0;

}