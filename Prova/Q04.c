/* 4. Escreva um programa que resolva o seguinte problema: uma cópia “xerox” custa R$ 0,25 por folha, mas acima de 100 folhas esse valor cai para R$ 0,20 por unidade.
Dado o total de cópias, informe o valor a ser pago. */

// Bibliotecas
#include <stdio.h>
#include <locale.h>

int main(){
    // Variáveis
    int copias;
    float valorcopia = 0.25;
    float valorpagar;

    setlocale(LC_ALL, "Portuguese");

    printf("Calcular valor de cópias\n");

    printf("Digite o número de cópias: ");
    scanf("%d", &copias);

    if(copias > 100)
        valorcopia = 0.20;
    
    valorpagar = copias * valorcopia;

    printf("O valor a ser pago é %.2f R$.\n", valorpagar);

    return 0;
}