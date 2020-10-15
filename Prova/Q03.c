// 3. Receba um valor do usuário referente a sua distância em metros, crie uma estrutura que armazene essa distância em km, em pés e em polegada. 

// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Constantes
#define CONVKM 0.001
#define CONVPES 3.28084
#define CONVPOL 39.3701

int main(){
    // Variáveis
    float distanciaM, distanciaKM, distanciaPES, distanciaPOL;

    setlocale(LC_ALL, "Portuguese");

    printf("Conversor de distância\n");

    printf("Digite a distância em metros: ");
    scanf("%f", &distanciaM);

    distanciaKM = distanciaM * CONVKM;
    distanciaPES = distanciaM * CONVPES;
    distanciaPOL = distanciaM * CONVPOL;

    printf("%.2f metros equivale a %.2f quilômetros.\n", distanciaM, distanciaKM);
    printf("%.2f metros equivale a %.2f pés.\n", distanciaM, distanciaPES);
    printf("%.2f metros equivale a %.2f polegadas.\n", distanciaM, distanciaPOL);

    return 0;
}