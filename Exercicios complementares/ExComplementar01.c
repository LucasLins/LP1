/* 
Parte 1) Durante esses meses, o professor Marcelo resolveu desenvolver sistemas em home office (ele não fez isso, é só um exemplo).
Uma das soluções desenvolvida e em produção calcula o preço pago por cada cliente de acordo com o número de requisições
executadas no servidor ao mês. Crie um programa que calcule o valor pago por cada cliente mensalmente, de acordo com o
número de requisições realizadas. Uma outra informação é que há um desconto de 10% no valor total quando as requisições
ultrapassam o valor de 10.000 requisições ao mês. Considere ainda que o cliente deve pagar R$ 1,15 a cada consulta. 

Parte 2) Faça um programa que leia dois números inteiros, encontre o maior deles e imprima para o usuário.
*/

// Libs
#include <stdio.h>
#include <stdlib.h>

// Color Codes
#define ColorGreen "\e[0;92m"
#define ColorYellow "\e[0;93m"
#define ColorCyan "\e[0;96m"
#define BColorWhite "\e[1;97m"
#define ResetColor "\e[0m"

// Constants
#define REQPRICE 1.15
#define DISCOUNT 0.9 // Miltiplicar sobre o valor para aplicar 10% de desconto
#define REQFORDISC 10000

// Main func
int main(){

    // Parte 1
    char user[31];
    unsigned int requests;
    float pay;

    printf(ColorCyan "Exibindo parte 1:\n" ResetColor);

    printf("Insira o nome do usuário: " ColorYellow "(Máximo de 30 caracteres!)\n" ColorGreen "-> " ResetColor);
    //scanf("%s", &user);
    gets(user);

    printf("Insira o número de requisições: \n" ColorGreen "-> " ResetColor);
    scanf("%d", &requests);

    pay = requests * REQPRICE;

    if (requests >= REQFORDISC){
        pay = (requests * REQPRICE) * DISCOUNT;
    }

    printf("O usuário " ColorGreen "%s" ResetColor " deverá pagar " ColorYellow "%.2f" ResetColor " R$.", user, pay);


    // Parte 2
    int number1, number2;

    printf(ColorCyan "\n\nExibindo parte 2:\n" ResetColor);

    printf("Insira o primeiro número inteiro: \n" ColorGreen "-> " ResetColor);
    scanf("%d", &number1);

    printf("Insira o segundo número inteiro: \n" ColorGreen "-> " ResetColor);
    scanf("%d", &number2);

    if (number2 > number1){
        printf("O número " BColorWhite "%d" ResetColor" é maior que o número " BColorWhite "%d!" ResetColor, number2, number1);
    }

    if (number1 > number2){
        printf("O número " BColorWhite "%d" ResetColor" é maior que o número " BColorWhite "%d!" ResetColor, number1, number2);
    }
    return 1;
}