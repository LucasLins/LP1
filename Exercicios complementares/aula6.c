#include <stdio.h>
#include <math.h>

int main(){
    int tabuada, calculo;
    int contador = 0;

    printf("Digite a tabuada: \n");
    scanf("%d", &tabuada);

    printf("A tabuada de %d é:\n", tabuada);
    while (contador < 10){
        contador++;
        calculo = tabuada * contador;
        printf("%d * %d = %d\n", tabuada, contador, calculo);

    }

}