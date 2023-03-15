#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K,C;
    printf("Insira o valor da sua temperatura em graus Kelvin:");
    scanf("%f", &K);
    C=K-273.15;
    printf("Essa temperatura eh %f em graus Celsius", C);
    return 0;
}
