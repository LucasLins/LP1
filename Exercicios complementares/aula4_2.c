#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    char extenso[7];

    printf("Digite um número de 1 a 7: ");
    scanf("%d", &numero);

    switch(numero){
        case 1:
        printf("O número digitado por extenso é: Um");
        break;

        case 2:
        printf("O número digitado por extenso é: Dois");
        break;

        case 3:
        printf("O número digitado por extenso é: Três");
        break;

        case 4:
        printf("O número digitado por extenso é: Quatro");
        break;

        case 5:
        printf("O número digitado por extenso é: Cinco");
        break;

        case 6:
        printf("O número digitado por extenso é: Seis");
        break;

        case 7:
        printf("O número digitado por extenso é: Sete");
        break;
        
        default:
        printf("Valor inválido.");
    }
    
    return 1;
}