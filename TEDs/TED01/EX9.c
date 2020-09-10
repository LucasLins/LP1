// 9) Faça um programa que leia dois valores do tipo float. Use um único comando de leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles foram lidos.

// Libs
#include <stdio.h>
#include <stdlib.h>

// Main func
int main(){
    float number1;
    float number2;
    printf("Digite dois números:\n");
    scanf("%f %f", &number1, &number2);
    printf("%f, %f", number2, number1);

    return 0;
}