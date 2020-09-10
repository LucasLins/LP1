// 4) Faça um programa que leia um número inteiro e depois o imprima usando o operador “%f”. Veja o que aconteceu.

// Libs
#include <stdio.h>
#include <stdlib.h>

// Main func
int main(){
    int number;
    printf("Digite um número inteiro:\n");
    scanf("%d", &number);
    printf("Valor lido: %f", number); // retornará o valor 0.000000

    return 0;
}