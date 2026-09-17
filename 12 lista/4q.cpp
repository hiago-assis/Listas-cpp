#include <iostream>
#include <iomanip>
using namespace std;



int lerQuantidadePessoas(){
    int num;
    
    do{

    cout << "Digite a quantidade de pessoas(Entre 1 e 100): ";
    cin >> num;

    if(num < 1 || num > 100){
        cout << "Valor invalido." << endl;
    }

    }while(num < 1 || num > 100);
    

    return num;

}

int lerIdades(int numeroPessoa){

    int idade;

      do{

    cout << "Digite a idade da pessoa " << numeroPessoa << " : ";
    cin >> idade;

    if(idade < 0 || idade > 120){
        cout << "Valor invalido." << endl;
    }

    }while(idade < 0 || idade > 120);

    return idade;

}

int main(){


    float soma = 0;
    int quantidadePessoas = lerQuantidadePessoas();
    int contador60mais = 0;
    int contador18menos = 0;

    for(int i = 1; i <= quantidadePessoas ; i++){
        float idades = lerIdades(i);
        soma += idades;

        if(idades < 18){
            contador18menos++;
        }else if(idades >= 60){
            contador60mais++;
        }
    }


    float media = soma / quantidadePessoas;

    cout << "Media de idade das pessoas: " << media << endl;
    cout << "Quantidade de pessoas menores de 18: " << contador18menos << endl;
    cout << "Quantidade de pessoas com 60 anos ou mais: " << contador60mais << endl;



    return 0;
}



