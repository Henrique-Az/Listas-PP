#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F,C;
    printf("Insira o valor da sua temperatura em graus Celsius:");
    scanf("%f", &C);
    F=C*1.8+32;
    printf("Essa temperatura eh %f em graus Fahrenheit", F);
    return 0;
}
