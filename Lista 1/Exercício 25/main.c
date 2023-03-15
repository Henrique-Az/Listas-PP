#include <stdio.h>
#include <stdlib.h>

int main()
{
    float M, A;
    printf("Insira o valor da area em acres:\n");
    scanf("%f", &A);
    M=A/0.000247;
    printf("O valor dessa area, em metros quadrados, eh %f", M);
    return 0;
}
