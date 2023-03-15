#include <stdio.h>
#include <stdlib.h>
#define Pi 3.141592

int main()
{
    float R, G;

    printf("Insira o valor do seu angulo em radianos:\n");
    scanf("%f", &R);
    G=R*180/Pi;
    printf("O valor do seu angulo em graus eh %f", G);
    return 0;
}
