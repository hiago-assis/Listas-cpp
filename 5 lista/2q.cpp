#include <iostream>
using namespace std;

int main(){
	

    double velocidadeMaxima, velocidadeRegistrada, percentualExcedido, limiteSeguranca; 
    int condicaoClimatica;     
    char reincidente; 
    string classificacao;         
   

    cout << "Informe a velocidade maxima permitida na via: ";
    cin >> velocidadeMaxima;

    cout << "Informe a velocidade registrada do veiculo: ";
    cin >> velocidadeRegistrada;

    cout << "Informe a condicao climatica (1-Normal, 2-Chuva, 3-Neblina): ";
    cin >> condicaoClimatica;

    cout << "O motorista e reincidente? (S/N): ";
    cin >> reincidente;

  
    if (condicaoClimatica == 2) {
        limiteSeguranca = velocidadeMaxima * 0.90; 
    } else if (condicaoClimatica == 3) {
        limiteSeguranca = velocidadeMaxima * 0.80; 
    } else {
        limiteSeguranca = velocidadeMaxima;
    }

    
    percentualExcedido = ((velocidadeRegistrada - limiteSeguranca) / limiteSeguranca) * 100;


    if (velocidadeRegistrada <= limiteSeguranca) {
        cout << "Classificacao final: Sem infracao \n" ;
        percentualExcedido = 0; 
    }
    else if (percentualExcedido <= 10) {
        cout << "Classificacao final: Advertencia \n";
    }
    else if (percentualExcedido <= 20) {
        cout << "Classificacao final: Infracao leve \n";
    }
    else if (percentualExcedido <= 50) {
        cout << "Classificacao final: Infracao grave \n";
    }
    else {
        cout << "Classificacao final: Infracao gravissima \n";
    }

    
    if (reincidente == 'S' || reincidente == 's') {
        if (classificacao == "Infracao leve") {
             cout << "Classificacao final: Infracao grave \n";
        }
        else if (classificacao == "Infracao grave") {
             cout << "Classificacao final: Infracao gravissima \n";
        }
       
    }


    cout << "Limite de seguranca considerado: " << limiteSeguranca << " km/h" << "\n";
    cout << "Percentual excedido: " << percentualExcedido << "%" << "\n";

    return 0;

}