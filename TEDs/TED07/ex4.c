#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int real1, real2;
    int img1, img2;

    int somaR, somaI, subR, subI, multiR, multiI;

    printf("Operações entre números complexos:\n");

    printf("Digite a parte real do primeiro número:\n");
    scanf("%d", &real1);

    printf("Digite a parte imaginária do primeiro número:\n");
    scanf("%d", &img1);

    printf("Digite a parte real do segundo número:\n");
    scanf("%d", &real2);

    printf("Digite a parte imaginária do segundo número:\n");
    scanf("%d", &img2);

    somaR = (real1 + real2);
    somaI = +(img1 + img2);

    subR = (real1 - real2);
    subI = +(img1 - img2);

    multiR = (real1 * real2) - (img1 * img2);
    multiI = +(real1 * img2) + (real2 * img1);

    if(somaI >= 0)
        printf("Soma: %d + %di\n", somaR, somaI);
    else
        printf("Soma: %d %di\n", somaR, somaI);

    if(subI >= 0)
        printf("Subtração: %d + %di\n", subR, subI);
    else 
        printf("Subtração: %d %di\n", subR, subI);

    if(multiI >= 0)
        printf("Multiplicação: %d + %di\n", multiR, multiI);
    else 
        printf("Multiplicação: %d %di\n", multiR, multiI);

}