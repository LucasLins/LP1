#include <stdio.h>
#include <stdlib.h>

int main(){
    float ladoa;
    float ladob;
    float ladoc;

    printf("Digite o primeiro lado do triângulo: ");
    scanf("%f", &ladoa);

    printf("Digite o segundo lado do triângulo: ");
    scanf("%f", &ladob);

    printf("Digite o terceiro lado do triângulo: ");
    scanf("%f", &ladoc);
    
    if( /* lado A */ ((abs(ladob - ladoc) < ladoa) && (ladoa < (ladob + ladoc))) && /* Lado B */ ((abs(ladoa - ladoc) < ladob) && (ladob < (ladoa + ladoc))) && /* Lado C */ ((abs(ladoa - ladob) < ladoc) && (ladoc < (ladoa + ladob)))){
        float perimetro = ladoa + ladob + ladoc;
        printf("O perímetro do triângulo é %.2f.", perimetro);
    }
    else{
        printf("Não é possível formar um triângulo com os dados fornecidos.");
    }

    return 1;
}