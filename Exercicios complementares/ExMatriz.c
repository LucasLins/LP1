#include <stdio.h>

int ordem;

void gerarmatriz(void);

int main(){
    printf("Gerador de matriz identidade\n");

    printf("Digite a ordem da Matriz: (EX: 10 = 10x10)\n");
    scanf("%d", &ordem);

    printf("\nMatriz identidade gerada: \n");

    gerarmatriz();

    return 0;
}

void gerarmatriz(){
    int matriz[ordem][ordem];
    int i, j;

    for(i = 0;i < ordem; i++){
        for(j = 0;j < ordem; j++){
            if(i == j)
                matriz[i][j] = 1;
            else 
                matriz[i][j] = 0;
            
            printf("%d ", matriz[i][j]); // Atribui os valores e já exibe a matriz, para não utilizar outro for para a exibição.
        }
        printf("\n");
    }
}