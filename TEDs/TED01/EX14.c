// 14) Faça um programa que leia três caracteres do tipo char e depois os imprima um em cada linha. Use um único comando printf() para isso.

// Libs
#include <stdio.h>
#include <stdlib.h>

// Main func
int main(){
    char letter1, letter2, letter3;

    printf("Digite três letras: \n");
    scanf("%c %c %c", &letter1, &letter2, &letter3);

    printf("Letras: \n%c\n%c\n%c", letter1, letter2, letter3);
}