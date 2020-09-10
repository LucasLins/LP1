// 13) Faça um programa que leia um caractere do tipo char e depois o imprima entre aspas duplas. Assim, se o caractere lido for a letra A, deverá ser impresso “A”.

// Libs
#include <stdio.h>
#include <stdlib.h>

// Main func
int main(){
    char letter;
    printf("Digite uma letra: ");
    scanf("%c", &letter);

    printf("\"%c\"", letter);
}