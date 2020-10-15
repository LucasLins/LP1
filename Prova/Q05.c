/* 5. Faça um programa para imprimir as raízes de uma equação do segundo grau na forma ax2+bx+c = 0.
Seu programa deve tratar todos os casos possíveis para valores de a,b e c. */

// Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    // Variáveis
    float valorA, valorB, valorC, delta, raiz1, raiz2;

    setlocale(LC_ALL, "Portuguese");

    printf("Calculadora de equação do segundo grau\n");

    printf("Digite o valor de A: ");
    scanf("%f", &valorA);

    printf("Digite o valor de B: ");
    scanf("%f", &valorB);

    printf("Digite o valor de C: ");
    scanf("%f", &valorC);

    delta = ((pow(valorB, 2)) -4 * valorA * valorC);

    if(valorA == 0)
        printf("Não é equação de segundo grau.\n");

    else if(delta < 0)
        printf("Não existe raiz!\n");
    
    else if(delta == 0){
        raiz1 = (-valorB + sqrt(delta)) / (2 * valorA);
        printf("Raiz única:\nx = %.2f\n", raiz1);
    }
    else if(delta > 0){
        raiz1 = (-valorB + sqrt(delta)) / (2 * valorA);
        raiz2 = (-valorB - sqrt(delta)) / (2 * valorA);
        printf("Raízes:\nx' = %.2f\nx\" = %.2f\n", raiz1, raiz2);
    }

    return 0;
}
