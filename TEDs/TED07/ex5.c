#include <stdio.h>
#include <locale.h>

struct dma{
    int dia;
    int mes;
    int ano;
}data1, data2;

int calculo, dia, mes, ano;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Insira o dia da primeira data:\n");
    scanf("%d", &data1.dia);

    printf("Insira o mês da primeira data:\n");
    scanf("%d", &data1.mes);

    printf("Insira o ano da primeira data:\n");
    scanf("%d", &data1.ano);

    printf("Insira o dia da segunda data:\n");
    scanf("%d", &data2.dia);

    printf("Insira o mês da segunda data:\n");
    scanf("%d", &data2.mes);

    printf("Insira o ano da segunda data:\n");
    scanf("%d", &data2.ano);

    if(data1.dia > data2.dia)
        dia = data1.dia - data2.dia;
    else 
        dia = data2.dia - data1.dia;
    
    if(data1.mes > data2.mes)
        mes = data1.mes - data2.mes;
    else 
        mes = data2.mes - data1.mes;

    if(data1.ano > data2.ano)
        ano = data1.ano - data2.ano;
    else 
        ano = data2.ano - data1.ano;

    calculo = dia + (mes*30) + (ano*365);

    printf("O total de dias entre as duas datas é: %d", calculo);

    return 0;
}