#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

float saques[30];
float depositos[30];
float valor, totalsaques, totaldepositos, saldo;
int quantisaques = 0;
int quantidepositos = 0;
int contsaques = 0;
int contdepos = 0;

void mostrardepositos(){
    int i;
    for(i = 0; i < quantidepositos; i++){
        printf("Depósito %d - %.2f R$\n", i+1, depositos[i]);
    }
}

void mostrarsaques(){
    int i;
    for(i = 0; i < quantisaques; i++){
        printf("Saque %d - %.2f R$\n", i+1, saques[i]);
    }
}

void calcular(){

    for(; contsaques < quantisaques; contsaques++){
        totalsaques += saques[contsaques];
    }
    for(; contdepos < quantidepositos; contdepos++){
        totaldepositos += depositos[contdepos];
    }
    saldo = totaldepositos - totalsaques;
}

void historico(){
    calcular();
    printf("-----HISTÓRICO-----\n");
    printf("Saldo atual: %.2f R$\n", saldo);

    printf("\nSaques efetuados:\n");
    mostrarsaques();

    printf("\nDepósitos efetuados:\n");
    mostrardepositos();

    printf("\nPressione enter para retortar...\n");
    scanf("%c");
    system("clear || cls");
}

void depositar(){
    calcular();
    printf("\nDigite a quantidade que deseja depositar:\n");
    printf("->");
    scanf("%f%*c", &valor);

    depositos[quantidepositos] = valor;
    quantidepositos++;
    printf("Depósito de %.2f R$ efetuado com sucesso!\n", valor);
}

void sacar(){
    calcular();
    printf("\nDigite a quantidade que deseja sacar:\n");
    printf("->");
    scanf("%f%*c", &valor);

    if(saldo >= valor){
        saques[quantisaques] = valor;
        quantisaques++;
        printf("Saque de %.2f R$ efetuado com sucesso!\n", valor);
    }
    else
        printf("Saldo insuficiente!\n");
    
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao;

    do{
        printf("\nBanco Alana\n");
        printf("----MENU----\n");
        printf("1 - Sacar\n");
        printf("2 - Depositar\n");
        printf("3 - Ver histórico e saldo\n");
        printf("4 - Sair\n");
        printf("\nO que deseja fazer?\n");
        printf("->");
        scanf("%d%*c", &opcao);

        switch(opcao){
            case 1:
                system("clear || cls");
                sacar();
                break;
            case 2:
                system("clear || cls");
                depositar();
                break;
            case 3:
                system("clear || cls");
                historico();
                break;
            case 4:
                system("clear || cls");
                printf("Desconectado, até mais!\n");
                break;
            default:
                system("clear || cls");
                printf("Opção desconhecida, tente novamente.\n");
                break;
        }
    }while(opcao != 4);
    
    return 0;
}