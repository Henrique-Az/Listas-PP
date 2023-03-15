#include <stdio.h>
#include <stdlib.h>

int main()
{
    float M, L;
    printf("Insira o valor do seu volume em metros cubicos:\n");
    scanf("%f", &M);
    L=1000*M;
    printf("O valor desse volume, em litros, eh %f", L);
    return 0;
}
