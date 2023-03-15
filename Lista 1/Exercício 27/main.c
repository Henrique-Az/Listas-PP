#include <stdio.h>
#include <stdlib.h>

int main()
{
    float M, H;
    printf("Insira o valor da area em hectares:\n");
    scanf("%f", &H);
    M=H*0.0001;
    printf("O valor dessa area, em metros quadrados, eh %f", M);
    return 0;
}
