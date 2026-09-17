#include <iostream>
using namespace std;

int main() {

    int N, contagem = 0;
    int i = 1;

    cout << "Digite um numero inteiro: ";
    cin >> N;


    cout << "Os multiplos de 3 sao: ";
    while(i <= N){
        if(i % 3 == 0){
                cout << i << " ";
                contagem++;
        }
        i++;
    }
    cout << "\nForam exibidos " << contagem << " multiplos";


    return 0;
}