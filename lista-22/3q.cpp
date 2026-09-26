#include <iostream> 
using namespace std;

int main(){

    int num;
    int temp;
    bool subiuAntes;
    bool subiuAgora;
    bool alternada = true;


    for(int i = 0; i < 10;i++){
        cout << "Digite um numero inteiro: ";
        cin >> num;

        if(i == 0){
            temp = num;
            continue;
        }

        if(num > temp){
           subiuAgora = true;
        }else{
            subiuAgora = false;
        }

     if(i >= 2 && subiuAgora == subiuAntes){
        alternada = false;
     }
        subiuAntes = subiuAgora;
        temp = num;
    }


    if(alternada){
        cout << "A sequencia e alternada" << endl;
    }else{
        cout << "A sequencia nao e alternada" << endl;
    }
}