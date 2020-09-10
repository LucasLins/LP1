// 7) Elabore um programa que leia um caractere e depois o imprima como um valor inteiro.

// Libs
#include <stdio.h>
#include <stdlib.h>

// Main func
int main(){
    char letter;
    printf("Digite uma letra: ");
    scanf("%c", &letter);
    printf("Letra lida: %d", letter);  // Retornará o código ASCII da letra digitada.

    return 0;
}