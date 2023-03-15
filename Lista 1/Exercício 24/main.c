#include <stdio.h>
#include <stdlib.h>

int main()
{
    float M, A;
    printf("Insira o valor da area em metros quadrados:\n");
    scanf("%f", &M);
    A=M*0.000247;
    printf("O valor dessa area, em acres, eh %f", A);
    return 0;
}
