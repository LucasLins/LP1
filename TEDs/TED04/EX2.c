/* 
2. Foi feita uma pesquisa entre os habitantes de uma região e coletados os dados de altura e sexo (0=masc, 1=fem) das pessoas.
Faça um programa que leia 50 dados diferentes e informe:
- a maior e a menor altura encontradas
- a média de altura das mulheres
- a média de altura da população
- o percentual de homens na população
*/

#include <stdio.h>

int main(){
    int contador = 1;
    int qtdados;
    int sexo;
    float altura;
    float mediafem;
    float mediapop;
    float porcmasc;
    float altmulher = 0;
    float althomem = 0;
    float maioralt = 0;
    float menoralt = 10;
    float masculino = 0.0;
    float feminino = 0.0;


    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &qtdados);

    while (contador <= qtdados){
        printf("Digite a altura da pessoa número %d: ", contador);
        scanf("%f", &altura);

        printf("Digite o sexo da pessoa número %d (masc = 0 // fem = 1): ", contador);
        scanf("%d", &sexo);
        printf("\n");
        
        if(maioralt < altura)
            maioralt = altura;
        
        if(menoralt > altura)
            menoralt = altura;

        if(sexo == 0){
            althomem += altura;
            masculino += 1.0;
        }
        else{
            altmulher += altura;
            feminino += 1.0;
        }
        contador++;
    }

    mediafem = altmulher / feminino;
    mediapop = (altmulher + althomem) / (feminino + masculino);
    porcmasc = (masculino / (masculino + feminino)) * 100.0;

    printf("A maior altura encontrada entre a população foi %.2f metros.\n", maioralt);
    printf("A menor altura encontrada entre a população foi %.2f metros.\n\n", menoralt);

    printf("A média de altura das mulheres é %.2f metros.\n", mediafem);
    printf("A média de altura da população é %.2f metros.\n\n", mediapop);

    printf("O percentual de homens na população é %.1f %%.", porcmasc);

    return 0;
}