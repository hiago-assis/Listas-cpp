#include <iostream>
using namespace std;


const int LIN = 4; // VENDEDOR
const int COL = 5; // DIA

void lerVendas(float vendas[][COL], int vendedores);
float totalVendedor(float vendas[][COL], int vendedor);
float totalDia(float vendas[][COL], int vendedores, int dia);
int melhorVendedor(float vendas[][COL], int vendedores);
int melhorDia(float vendas[][COL], int vendedores);
int vendasSuperioresMedia(float vendas[][COL], int vendedores);

int main (){
    float vendas[LIN][COL];
    int numeroVendedor;

    lerVendas(vendas, LIN);

    for(int i = 0; i < LIN; i++){             
        cout << "Total vendedor " << i << ": " << totalVendedor(vendas, i) << endl;
    }
   
    for(int j = 0; j < COL; j++){
         cout << "Total dia: " << j << ": " << totalDia(vendas, LIN, j) << endl;
    }

    cout << "Melhor vendedor e: " << melhorVendedor(vendas, LIN) << endl;

    cout << "Melhor vendedor dia e: " << melhorDia(vendas, LIN) << endl;

    cout << "Melhor vendedor dia e: " << vendasSuperioresMedia(vendas,LIN) << endl;
    return 0;
}

void lerVendas(float vendas[][COL], int vendedores){

    for(int i = 0; i < vendedores;i++){
        for(int j = 0; j < COL; j++){
            cout << "Linha " << (i + 1) << ": " << "Coluna " << (j + 1) << ": ";
            cin >> vendas[i][j];
        }
    }
}

float totalVendedor(float vendas[][COL], int vendedor){ 

    float soma = 0;

        for(int j = 0; j < COL; j++){
            soma += vendas[vendedor][j];
        }

    return soma;
}


float totalDia(float vendas[][COL], int vendedores, int dia){

    float totalDia = 0;

    
    for(int i = 0; i < vendedores; i++){
        totalDia += vendas[i][dia]; 
    }

    return totalDia;

}


int melhorVendedor(float vendas[][COL], int vendedores){
    float melhorTotal = totalVendedor(vendas, 0);
    int indiceMaior = 0;


    for(int i = 1; i < vendedores; i++){
        if(totalVendedor(vendas,i) > melhorTotal){
            melhorTotal = totalVendedor(vendas,i);
            indiceMaior = i;
        }
    }

    return indiceMaior;
}


int melhorDia(float vendas[][COL], int vendedores){

    float melhorTotal = totalDia(vendas,vendedores,0);
    int indiceMaior = 0;


    for(int i = 1; i < COL; i++){
        if(totalDia(vendas,LIN,i) > melhorTotal){
            melhorTotal = totalDia(vendas,LIN,i);
            indiceMaior = i;
        }
    }

    return indiceMaior;

}

int vendasSuperioresMedia(float vendas[][COL], int vendedores){
    int somaTotal = 0;
    float mediaGeral;
    int qntd;

    for(int i = 0; i < vendedores;i++){
        somaTotal += totalVendedor(vendas,i);
    }

    mediaGeral = somaTotal / vendedores;
    
    for(int i = 0; i < vendedores;i++){
        if(totalVendedor(vendas,i) > mediaGeral){
            qntd++;
        }
    }

    return qntd;
}
