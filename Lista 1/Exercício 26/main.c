#include <stdio.h>
#include <stdlib.h>

int main()
{
    float M, H;
    printf("Insira o valor da area em metros quadrados:\n");
    scanf("%f", &M);
    H=M*10000;
    printf("O valor dessa area, em hectares, eh %f", H);
    return 0;
}
