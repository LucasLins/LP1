// 15) Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima-as de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e uma em cada linha. Use um único comando printf() para cada operação de escrita das três variáveis.

// Libs
#include <stdio.h>
#include <stdlib.h>

// Main func
int main(){
    char letra;
    int inteiro;
    float decimal;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    printf("Digite um número inteiro: ");
    scanf("%d", &inteiro);

    printf("Digite um número decimal: ");
    scanf("%f", &decimal);

    printf("Espaços:\n%c %d %f\n", letra, inteiro, decimal);
    printf("Tabulação horizontal:\n%c\t%d\t%f\n", letra, inteiro, decimal);
    printf("Linhas:\n%c\n%d\n%f", letra, inteiro, decimal);
}