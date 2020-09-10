// 6) Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica.

// Libs
#include <stdio.h>
#include <stdlib.h>

// Main func
int main(){
    double number;
    printf("Digite um número:\n");
    scanf("%f", &number);
    printf("Valor lido: %E", number);

    return 0;
}