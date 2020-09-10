#include <stdio.h>
#include <stdlib.h>

int main(){
    float numerador;
    float denominador;

    printf("Digite o numerador da divisão:\n");
    scanf("%f", &numerador);

    printf("Digite o denominador da divisão:\n");
    scanf("%f", &denominador);

    if (denominador == 0){
        printf("O denominador não pode ser 0.\n");
        printf("Digite o denominador da divisão novamente:\n");
        scanf("%f", &denominador);
    }
    float divisao = numerador / denominador;
    printf("O resultado da divisão é: %f", divisao);
    
    return 1;

}