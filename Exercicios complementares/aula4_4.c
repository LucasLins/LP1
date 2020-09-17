#include <stdio.h>
#include <stdlib.h>

// Categorias do nadador
#define INFA "Infantil A"
#define INFB "Infantil B"
#define JUVA "Juvenil A"
#define JUVB "Juvenil B"
#define ADUL "Adulto"

int main(){
    int idade;

    printf("Insira a idade do nadador: ");
    scanf("%d", &idade);

    switch(idade){
        case 5 ... 7:
            printf("O nadador é da categoria %s.", INFA);
            break;

        case 8 ... 10:
            printf("O nadador é da categoria %s.", INFB);
            break;

        case 11 ... 13:
            printf("O nadador é da categoria %s.", JUVA);
            break;

        case 14 ... 17:
            printf("O nadador é da categoria %s.", JUVB);
            break;

        case 18 ... 120:
            printf("O nadador é da categoria %s.", ADUL);
            break;

        default:
            printf("O nadador não se encaixa em nenhuma categoria.");
    }
}