// 2) Faça o cálculo do imposto de renda baseado no salário mensal considerando as alíquotas da Tabela 1.

// Libs
#include <stdio.h>
#include <stdlib.h>

// Color Codes
#define ColorBlack "\e[0;30m"
#define ColorRed "\e[0;91m"
#define ColorGreen "\e[0;92m"
#define ColorYellow "\e[0;93m"
#define ColorBlue "\e[0;94m"
#define ColorMagenta "\e[0;95m"
#define ColorCyan "\e[0;96m"
#define ColorWhite "\e[1;97m"
#define ResetColor "\e[0m"

// main func
int main(){
    // variables
    float salary, tax;

    printf(ColorYellow"Calculadora de Imposto de Renda\n"ResetColor);
    printf("Digite o seu salário: ");
    scanf("%f%*c", &salary);

    if(salary > 0 && salary <= 1903.98)
        printf(ColorGreen"[RESULTADO] "ResetColor"Você não precisa pagar imposto de renda!");
    else if(salary >= 1903.99 && salary <= 2826.65){
        tax = (salary * 0.0075) - 142.8;
        printf(ColorGreen"[RESULTADO] "ResetColor"Você deve pagar "ColorWhite"%.2f R$"ResetColor" de imposto de renda!", tax);
    }
    else if(salary >= 2826.66 && salary <= 3751.05){
        tax = (salary * 0.15) - 354.8;
        printf(ColorGreen"[RESULTADO] "ResetColor"Você deve pagar "ColorWhite"%.2f R$"ResetColor" de imposto de renda!", tax);
    }
    else if(salary >= 3751.06 && salary <= 4664.68){
        tax = (salary * 0.225) - 636.13;
        printf(ColorGreen"[RESULTADO] "ResetColor"Você deve pagar "ColorWhite"%.2f R$"ResetColor" de imposto de renda!", tax);
    }
    else if(salary > 4664.68){
        tax = (salary * 0.275) - 869.36;
        printf(ColorGreen"[RESULTADO] "ResetColor"Você deve pagar "ColorWhite"%.2f R$"ResetColor" de imposto de renda!", tax);
    }
    else
        printf(ColorRed"[ERRO]"ResetColor" O salário digitado é inválido.");
    
    return 1;
}