// 8) Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em que eles foram lidos.

// Libs
#include <stdio.h>
#include <stdlib.h>

// Main func
int main(){
    int number1;
    int number2;
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &number1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &number2);
    printf("%d, %d", number2, number1);

    return 0;
}