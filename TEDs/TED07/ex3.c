#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct funcionarios{
    char nome[21];
    int idade;
    char sexo[3];
    char cpf[21]; 
    char data[12];
    int setor;
    char cargo[31];
    float salario;

}funcionario;

int main(){
    int i;
    setlocale(LC_ALL, "Portuguese");

    printf("Cadastrar funcionário:\n");

    printf("Digite o nome: (máximo 20 caracteres!)\n");
    fgets(funcionario.nome, 21, stdin);

    printf("Digite a idade:\n");
    scanf("%d%*c", &funcionario.idade);
    
    printf("Digite o sexo: (M/F)\n");
    fgets(funcionario.sexo, 3, stdin);

    printf("Digite o CPF:\n");
    fgets(funcionario.cpf, 21, stdin);

    printf("Digite a data de nascimento:\n");
    fgets(funcionario.data, 12, stdin);

    printf("Digite o setor: (0-99)\n");
    scanf("%d%*c", &funcionario.setor);

    printf("Digite o cargo: (máximo 30 caracteres!)\n");
    fgets(funcionario.cargo, 31, stdin);

    printf("Digite o salário:\n");
    scanf("%f%*c", &funcionario.salario);


    printf("Funcionario:\n");

    printf("Nome: %s", funcionario.nome);
    printf("Idade: %d\n", funcionario.idade);
    printf("Sexo: %s", funcionario.sexo);
    printf("CPF: %s", funcionario.cpf);
    printf("Data de nascimento: %s", funcionario.data);
    printf("Setor: %d\n", funcionario.setor);
    printf("Cargo: %s", funcionario.cargo);
    printf("Salário: %.2f\n", funcionario.salario);

    return 0;
}