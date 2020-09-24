// 2. Calcule o valor da série harmônica h por meio do valor de n

#include <stdio.h>

int main(){
    int n, i;
    float h;

    printf("Insira o valor de n: ");
    scanf("%d", &n);

    for(i = 1 ; i <= n ; i++){
        h += 1.0 / i; 
    }

    printf("O valor da série harmonica é %f", h);

    return 0;
}