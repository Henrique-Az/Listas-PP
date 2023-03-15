#include <stdio.h>
#include <stdlib.h>
#define Pi 3.141592

int main()
{
    float R, G;

    printf("Insira o valor do seu angulo em graus:\n");
    scanf("%f", &G);
    R=G*Pi/180;
    printf("O valor do seu angulo em radianos eh %f", R);
    return 0;
}
