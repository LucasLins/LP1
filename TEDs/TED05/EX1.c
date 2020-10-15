// Libs
#include <stdlib.h>
#include <math.h>
#include <locale.h>

// Constantes
#define PI 3.14

// Variaveis
int raio;
float area;

float areacircunferencia(int r){
    area = PI * pow(r, 2);
    return area;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Calcular área da circunferência\n");
    printf("Digite o raio da circunferência: ");
    scanf("%d", &raio);

    areacircunferencia(raio);
    printf("A área da circunferência é: A = %.2f m².\n", area);

    return 0;
}