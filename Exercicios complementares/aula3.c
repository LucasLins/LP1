#include <stdio.h>
#include <stdlib.h>
#include "colors.h"


int main(){
    // Temperatura
    int celsius = 32;
    const unsigned int CKELVIN = celsius + 273;
    const float CFAHREN = (1.8 * celsius) + 32;

    printf(ColorYellow "Convertendo %d° Celsius..." ResetColor, celsius);
    printf(ColorGreen "\nKelvin: " ResetColor "%d\n" ColorGreen "Fahrenheit: " ResetColor "%f\n", CKELVIN, CFAHREN);

    // Distancia
    float km = 120;
    const float CMILHAS = km * 0.62137;
    const float CMETROS = km * 1000;
    const float CCM = km * 100000;

    printf(ColorYellow "\nConvertendo %f quilômetros..." ResetColor, km);
    printf(ColorGreen "\nMilhas: " ResetColor "%f\n" ColorGreen "Metros: " ResetColor "%f\n" ColorGreen "Centímetros: " ResetColor "%f\n", CMILHAS, CMETROS, CCM);
}