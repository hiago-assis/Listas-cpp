#include <iostream>
using namespace std;


bool verificar(float valor);
float aplicarDesconto(float valor);

int main(){

    float valorVenda;
    float valorAposDesconto;
    float totalAntes = 0;
    float totalDepois = 0;
    float maiorVenda = 0;
    int qntdVendas = 0;

    do{
        cout << "Digite o valor da venda: ";
        cin >> valorVenda;

        if(!verificar(valorVenda)){
            cout << "Numero negativo ignorado." << endl;
            continue;
        }


        if(valorVenda > 0){
            qntdVendas++;
        }
        
        totalAntes+= valorVenda;

        valorAposDesconto = aplicarDesconto(valorVenda);
        totalDepois += valorAposDesconto;

        if(valorVenda > maiorVenda){
            maiorVenda = valorVenda;
        }

    }while(valorVenda != 0);

    cout << "Quantidade de vendas: " << qntdVendas << endl;
    cout << "Total antes dos descontos: " << totalAntes << endl;
    cout << "Total apos os descontos: " << totalDepois << endl;
    cout << "Maior venda: " << maiorVenda << endl;
}

bool verificar(float valor){

    if(valor >= 0){

        return true;
    }else{
        return false;
    }
}


float aplicarDesconto(float valor){
    float valorAposDesconto;

    if(valor <= 100){
        valorAposDesconto = valor;
    }else if(valor > 100 && valor <= 500){
        valorAposDesconto = valor - (valor * 0.05);
    }else{
        valorAposDesconto = valor - (valor * 0.10);
    }

    return valorAposDesconto;
}