#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K,C;
    printf("Insira o valor da sua temperatura em graus Celsius:");
    scanf("%f", &C);
    K=C+273.15;
    printf("Essa temperatura eh %f em graus Kelvin", K);
    return 0;
}
