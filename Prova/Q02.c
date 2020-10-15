// 2. Faça um programa que leia um número e descubra se ele é primo ou não, informando ao usuário.

// Bibliotecas
#include <stdio.h>
#include <locale.h>

int main(){
    // Variáveis
    int numero;
    int contador = 1;
    int primo = 0;

    setlocale(LC_ALL, "Portuguese");

    printf("Detector de número primo\n");

    printf("Digite um número: ");
    scanf("%d", &numero);

    for(contador ; contador < numero ; contador+=2){ // Realiza a verificação apenas com números ímpares, tornando o programa mais rápido.
        if (numero % contador == 0 && contador != 1){ 
            primo = 1;
            contador = numero + 1; // Para o loop para tornar o programa mais rápido, caso contrário, ele continuaria até o fim do loop mesmo sabendo o resultado.
        }
    }

    if(numero == 1)
        primo = 1;

    if(primo == 0)
        printf("%d é um número primo!\n", numero);
    else
        printf("%d não é um número primo!\n", numero);    
    
    return 0;
}