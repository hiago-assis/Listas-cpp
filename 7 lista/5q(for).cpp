// Com FOR
#include <iostream>
using namespace std;

int main() {

    double nota, soma = 0;

    for(int i = 1; i <= 5; i++){
        cout << "Nota " << i << ": ";
        cin >> nota;
        soma += nota;
    }

    double media = soma / 5;

    cout << "Media = " << media;

    return 0;

}