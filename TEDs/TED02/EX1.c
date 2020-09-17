// 1) Monte uma calculadora por meio de dois valores numéricos e um operador aritmético. 

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
    float number1, number2, calculus;
    char operator;

    // input
    printf(ColorYellow "Calculadora\n" ResetColor);

    printf("Digite o primeiro número: ");
    scanf("%f%*c", &number1);

    printf("Digite o segundo número: ");
    scanf("%f%*c", &number2);

    /* O scanf deixa um \n no buffer depois de digitar o número, ao utilizar o scanf para capturar um char,
     ele automaticamente captura o \n que estava no buffer e pula o scanf do char que o usuário ia digitar.
     Dentre as várias soluções que existe para este problema, optei por utilizar o %*c para capturar e descartar
     qualquer \n que tenha ficado no buffer.
    */

    printf(ColorYellow"╔═══════MENU════════╗\n");
    printf("║ Somar = \"+\"       ║\n");
    printf("║ Subtrair = \"-\"    ║\n");
    printf("║ Multiplicar = \"*\" ║\n");
    printf("║ Dividir = \"/\"     ║\n");
    printf("╚═══════════════════╝\n" ResetColor);

    printf("Digite a operação que deseja fazer: ");
    scanf("%c", &operator); 

    // Verifica se o usuário não está tentando dividir algo por 0
    if(number2 == 0 && operator == '/'){ 
        printf(ColorRed"[ERRO] "ResetColor"Não é possível dividir um número por 0.\n");
        printf("Digite novamente o segundo número: ");
        scanf("%f%*c", &number2);
    }

    // Menu
    switch(operator){
        case '+':
            calculus = number1 + number2;
            printf(ColorGreen"[RESULTADO] "ResetColor"%.2f + %.2f = "ColorWhite"%.2f"ResetColor, number1, number2, calculus);
            break;
        
        case '-':
            calculus = number1 - number2;
            printf(ColorGreen"[RESULTADO] "ResetColor"%.2f - %.2f = "ColorWhite"%.2f"ResetColor, number1, number2, calculus);
            break;

        case '*':
            calculus = number1 * number2;
            printf(ColorGreen"[RESULTADO] "ResetColor"%.2f * %.2f = "ColorWhite"%.2f"ResetColor, number1, number2, calculus);
            break;

        case '/':
            calculus = number1 / number2;
            printf(ColorGreen"[RESULTADO] "ResetColor"%.2f / %.2f = "ColorWhite"%.2f"ResetColor, number1, number2, calculus);
            break;

        default:
            printf(ColorRed"[ERRO] "ResetColor"Operador desconhecido.\n");
    }

    return 1;
}