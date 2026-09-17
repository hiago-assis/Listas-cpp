#include <iostream>
using namespace std;

int main() {

    int N, contagem = 0;
    int i = 1;

    cout << "Digite um numero inteiro: ";
    cin >> N;


    cout << "Os multiplos de 3 sao: ";
    do{
         if(i % 3 == 0){
                cout << i << " ";
                contagem++;
        }
        i++;
        
    }while(i <= N);
    cout << "\nForam exibidos " << contagem << " multiplos";


    return 0;
}