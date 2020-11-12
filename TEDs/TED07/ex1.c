#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct pessoas{
    char nome[21];
    int idade;
    char endereco[31];
}pessoa;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o nome da pessoa: (máximo 20 caracteres!)\n");
    fgets(pessoa.nome, 21, stdin);

    printf("Digite a idade da pessoa:\n");
    scanf("%d%*c", &pessoa.idade);
    
    printf("Digite o endereço da pessoa: (máximo 30 caracteres!)\n");
    fgets(pessoa.endereco, 31, stdin);

    printf("\nNome: %sIdade: %d\nEndereço: %s", pessoa.nome, pessoa.idade, pessoa.endereco);

    return 0;

}