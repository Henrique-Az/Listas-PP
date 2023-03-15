#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    printf("Insira o valor dos catetos do triangulo:\n");

    scanf("%f %f", &a, &b);

    printf("A hipotenusa desse triangulo eh %f", sqrt(a*a+b*b));
    return 0;
}
