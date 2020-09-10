#include <stdio.h>
#include <stdlib.h>
#include "colors.h"

int main(void){
    // Exercício 1
    printf(ColorYellow "Exercício 1\r\n" ResetColor);
    char* str1 = "Aula de LP1";
    char* str2 = "Alana Morais";
    int year = 2020;
    char* date = "21/08";
    printf("%s\n%s\n%d\n%s\n", str1, str2, year, date);

    // Exercício 2
    printf(ColorYellow "\nExercício 2\r\n" ResetColor);
    char* matricula = "20201022008";
    float salario = 2500.59;
    char* telefone = "(83)99813-1589";

    printf("Matricula: %s\nSalario: %f\nTelefone: %s", matricula, salario, telefone);
}