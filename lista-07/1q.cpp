#include <iostream>
using namespace std;

int main() {

    int N;
    int i = 1;
    int y = 1;

    cout << "Digite um numero inteiro: ";
    cin >> N;


    cout << "Lista com for: ";
    for(int i = 1; i <= N;i++){
        cout << i << " " ;
    }

    cout << endl;


    cout << "Lista com while: ";
    while(i <= N){
        cout << i << " ";
        i++;
    }

    cout << endl;

    cout << "Lista com do while: ";
    do{
        cout << y << " ";
        y++;


        
        
    }while(y <= N);
   




    return 0;


}