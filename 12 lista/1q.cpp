#include <iostream>
#include <iomanip>
using namespace std;


int lerN(){

    int n;

    do{
           cout << "Digite a quantidade de alunos(entre 1 e 50): ";
           cin >> n;

           if(n < 1 || n > 50 ){
            cout << "Valor invalido." << endl;
           }
           
    }while(n < 1 || n > 50);

    return n;
}

int lerNota(int numeroAluno){
 
    float nota;

    do{
        
        cout << "Digite a nota do aluno " << numeroAluno << " : ";
        cin >> nota;

          if(nota < 1 || nota > 10 ){
            cout << "Valor invalido." << endl;
           }

    }while(nota < 1 || nota > 10);

    return nota;

}


int main(){

    int n = lerN();
    float soma = 0;
    int contadorAprovados = 0;
    

    for(int i = 1; i <= n;i++){
        float nota = lerNota(i);
        soma+= nota;

        if(nota>= 7.0){
            contadorAprovados++;
        }
    }


    float media = soma / n;

    cout << "Media da turma: " << media << endl;
    cout << "Quantidade de alunos com nota igual ou superior a 7: " << contadorAprovados << endl;


   

    return 0;
}