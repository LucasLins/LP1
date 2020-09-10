// 5) Faça um programa que leia um valor do tipo float e depois o imprima usando o operador “%d”. Veja o que aconteceu.

// Libs
#include <stdio.h>
#include <stdlib.h>

// Main func
int main(){
    float number;
    printf("Digite um número float:\n");
    scanf("%d", &number);
    printf("Valor lido: %d", number); // retornará o valor 0

    return 0;
}