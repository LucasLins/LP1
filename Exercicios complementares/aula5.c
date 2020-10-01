#include <stdio.h>
#include <math.h>

int main(){

    int m, a, i;
    scanf("%d", &m);

    for(a = 0; a <= m ; a++){
        for(i = 0 ; i < a ; i++){
            printf("*");
        }
        printf("\n");
    }
}