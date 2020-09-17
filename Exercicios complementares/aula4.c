#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float ladoa;
    float ladob;
    float ladoc;

    printf("Digite o primeiro lado do tri�ngulo: ");
    scanf("%f", &ladoa);

    printf("Digite o segundo lado do tri�ngulo: ");
    scanf("%f", &ladob);

    printf("Digite o terceiro lado do tri�ngulo: ");
    scanf("%f", &ladoc);
    
    if( /* lado A */ ((abs(ladob - ladoc) < ladoa) && (ladoa < (ladob + ladoc))) && /* Lado B */ ((abs(ladoa - ladoc) < ladob) && (ladob < (ladoa + ladoc))) && /* Lado C */ ((abs(ladoa - ladob) < ladoc) && (ladoc < (ladoa + ladob)))){
        float perimetro = ladoa + ladob + ladoc;
        printf("O per�metro do tri�ngulo � %.2f.", perimetro);
    }
    else{
        printf("N�o � poss�vel formar um tri�ngulo com os dados fornecidos.");
    }

    return 1;
}