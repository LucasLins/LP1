// 3) Escreva um programa que leia um número inteiro e depois imprima a mensagem “Valor lido:”, seguido do valor inteiro. Use apenas um comando printf().

// Libs
#include <stdio.h>
#include <stdlib.h>

// Main func
int main(){
    int number;
    printf("Digite um número inteiro:\n");
    scanf("%d", &number);
    printf("Valor lido: %d", number);

    return 0;
}