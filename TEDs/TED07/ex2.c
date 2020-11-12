#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct alunos{
    char nome[21];
    char matricula[11];
    char curso[21];
}aluno[5];

int main(){
    int i;
    setlocale(LC_ALL, "Portuguese");

    for(i = 0; i < 5; i++){
        printf("\nDigite o nome do aluno: (máximo 20 caracteres!)\n");
        fgets(aluno[i].nome, 21, stdin);

        printf("Digite a matricula do aluno: (máximo 10 dígitos)\n");
        fgets(aluno[i].matricula, 11, stdin);
        
        printf("Digite o curso do aluno: (máximo 20 caracteres!)\n");
        fgets(aluno[i].curso, 21, stdin);
    }

    printf("Alunos:\n");

    for(i = 0; i < 5; i++){
        printf("\nAluno: %s", aluno[i].nome);
        printf("Matricula: %s", aluno[i].matricula);
        printf("Curso: %s", aluno[i].curso);
    }
    
    return 0;
}