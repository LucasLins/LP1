// 10) Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano (inteiros). Em seguida, imprima os valores lidos separados por uma barra (\).

// Libs
#include <stdio.h>
#include <stdlib.h>

// Main func
int main(){
    int day;
    int month;
    int year;

    printf("Insira o dia: ");
    scanf("%d", &day);

    printf("Insira o mês: ");
    scanf("%d", &month);

    printf("Insira o ano: ");
    scanf("%d", &year);

    printf("Data lida: %d/%d/%d", day, month, year);
}