#include <stdio.h>
#include <stdlib.h>
#define Pi 3.141592
int main()
{
    float r, h;

    printf("Escreva o raio do cilindro:\n");
    scanf("%f", &r);

    printf("Escreva a altura do cilindro:\n");
    scanf("%f", &h);

    printf("O volume do cilindro eh %f", Pi*r*r*h);
    return 0;
}
