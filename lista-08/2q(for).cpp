#include <iostream>
using namespace std;

int main() {

    int N, contagem = 0;

    //Com for

    cout << "Digite um numero inteiro: ";
    cin >> N;


    cout << "Os multiplos de 3 sao: ";
    for(int i = 1; i <= N;i++){
        if(i % 3 == 0){
                cout << i << " ";
                contagem++;
        }
    }
    cout << "\nForam exibidos " << contagem << " multiplos";


    return 0;
}