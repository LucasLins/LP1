/* 1. Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano.
Construa um programa que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico. */

#include <stdio.h>

int main(){
    float chico = 1.50;
    float ze = 1.10;
    int anos = 0;
    
    for(anos ; ze < chico ; anos++){
        chico += 0.02;
        ze += 0.03;
    }

    printf("São necessários %d anos para Zé ser maior que Chico.\nAltura após %d anos:\nChico: %.2f m\nZé: %.2f m\n", anos, anos, chico, ze);
    return 0;
}