// 1. Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas do chamado triângulo de Floyd:

#include <stdio.h>

int main(){
    int linhas;
    int numero = 1;
    int contador1 = 1;
    int contador2 = 1;

    printf("Digite o número de linhas do Triângulo de Floyd: ");
    scanf("%d", &linhas);

    while (contador1 <= linhas){
        
        while(contador2 <= contador1){
            printf("%d ", numero);
            numero++;
            contador2++;
        }

        printf("\n");
        contador1++;
        contador2 = 1;
        /* Utilizando for eu poderia definir que sempre o contador2 = 1 no inicio do laço desta forma: for(contador2 = 1; contador2 <= contador1; contador2++).
        Como estou utilizando while, eu reseto o contador2 para 1 depois que o segundo while é finalizado. */
    }

    return 0;
}