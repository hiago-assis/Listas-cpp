#include <iostream>
using namespace std;

int main() {
    double cpu, memoria, temperatura, disco;      
    int requisicoes, qtdIndicadores = 0;              
    char falhaRecente;
    string classificacao;       

    cout << "Informe o percentual de uso da CPU: ";
    cin >> cpu;

    if(cpu >= 70 && cpu <= 85){
        qtdIndicadores++;
    }

    cout << "Informe o percentual de uso da memoria RAM: ";
    cin >> memoria;

     if(memoria >= 75 && memoria <= 90){
        qtdIndicadores++;
    }

    cout << "Informe a temperatura do processador (em graus Celsius): ";
    cin >> temperatura;

     if(temperatura >= 70 && temperatura <= 80){
        qtdIndicadores++;
    }

    cout << "Informe a quantidade de requisicoes por segundo: ";
    cin >> requisicoes;

    cout << "Informe o percentual de espaco ocupado em disco: ";
    cin >> disco;

     if(disco >= 85 && disco <= 95){
        qtdIndicadores++;
    }

    cout << "Houve falha de servico nos ultimos 10 minutos? (S/N): ";
    cin >> falhaRecente;


    //Critico
    if(cpu > 85 || memoria > 90 || temperatura > 80 || disco > 95 || (falhaRecente == 'S' || falhaRecente == 's')){
        classificacao = "Critico";
    }
    //Atenção
    else if((cpu >= 70 && cpu <= 85) ||
             (memoria >= 75 && memoria <= 90) || 
             (temperatura >= 70 && temperatura <= 80) || 
             (disco >= 85 && disco <= 95)){

            classificacao = "Atencao";
    }
    //Normal
    else if(cpu < 70 && memoria < 75 && temperatura < 70 && disco < 85 && (falhaRecente == 'N' || falhaRecente == 'n')){
        classificacao = "Normal";
    }

    //Critico
    if(requisicoes > 10000 && cpu >= 80){
        classificacao = "Critico";
    }

    //Critico
    if(qtdIndicadores >= 2){
        classificacao = "Critico";
    }
    
    cout << "Estado atual do servidor: "<< classificacao;


    return 0;
}