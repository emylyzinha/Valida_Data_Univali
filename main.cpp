#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    
    //declaração variavéis necessárias 
    int ano, mes, dia, quantDias;
    string nomeMes;
    bool bissexto;
    
    //solicita que usuário informe os dados 
    cout<<"Informe a data desejada (utilize apenas números)\nDia: ";
    cin>>dia;
    cout<<"Mês: ";
    cin>>mes;
    cout<<"Ano: ";
    cin>>ano;
    
    //verifica se é bissexto
    //opção 01: é bissexto se for divisível por 4 e não for divisível por 100
    //opção 02: é bissexto se for divisível por 400
    // caso contrário, o ano não é bissexto
    if ( (ano % 4  == 0 && ano % 100 != 0) || ano % 400 == 0){
        bissexto = true;
    } else {
        bissexto = false;
    }
    
    
    //verificar se mês informado é valido
    //caso não seja válido informa ao usuário
    if (mes < 0 && mes > 13){
        cout<<"Mês informado não é valido";
        return 0;
    }
    
    //verificar se dia e ano são validos
    //caso não um deles não seja válido informa ao usuário
    if (dia < 0 || ano < 0){
        cout<<"Dia e/ou mês inválido(s)";
        return 0;
    }
    
    //defini os dias de cada mês
    switch(mes){
        
        case 1:
        nomeMes="Janeiro";
        quantDias=31;
        break;
        
        //caso o ano seja bissexto fevereiro terá 29 dias, caso contarário terá 28 dias
        case 2:
        nomeMes="Fevereiro";
        if (bissexto){
            quantDias=29;
        } else {
            quantDias=28;
        }
        break;
        
        case 3:
        nomeMes="Março";
        quantDias=31;
        break;
        
        case 4:
        nomeMes="Abril";
        quantDias=30;
        break;
        
        case 5:
        nomeMes="Maio";
        quantDias=31;
        break;
        
        case 6:
        nomeMes="Junho";
        quantDias=30;
        break;
        
        case 7:
        nomeMes="Julho";
        quantDias=31;
        break;
        
        case 8:
        nomeMes="Agosto";
        quantDias=31;
        break;
        
        case 9:
        nomeMes="Setembro";
        quantDias=30;
        break;
        
        case 10:
        nomeMes="Outubro";
        quantDias=31;
        break;
        
        case 11:
        nomeMes="Novembro";
        quantDias=30;
        break;
        
        case 12:
        nomeMes="Dezembro";
        quantDias=31;
        break;
    }
    
    //verifica se dia indicado é valido considerando o mês digitado pelo usuário
    //caso não seja válido informa ao usuário
    if (dia > quantDias){
        cout<<"Dia indicado não é válido";
        return 0;
    }
    
    //apresenta resultado ao usuário - caso data seja válida
    cout<<"Data: "<<dia<<" de "<<nomeMes<<" de "<<ano<<" é uma data válida.";
    
    return 0;
}