#include <stdio.h>
#include <stdlib.h>

int main(){
    const float CMILHA = 0.62137;
    float km = 143;
    float milha = km * CMILHA;

    printf("100 Quilômetros em milhas é: %.2f", milha);

    return 1;
}