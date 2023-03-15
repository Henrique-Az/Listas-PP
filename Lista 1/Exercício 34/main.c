#include <stdio.h>
#include <stdlib.h>
#define Pi 3.141592
int main()
{
    float r;

    printf("Insira o valor do raio do circulo:\n");
    scanf("%f", &r);

    printf("O valor da area do circulo eh %f", r*r*Pi);
    return 0;
}
