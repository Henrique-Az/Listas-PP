#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K, M;
    printf("Insira o valor da sua velocidade em Km/h:\n");
    scanf("%f", &K);
    M=K/3.6;
    printf("Essa velocidade, em metros por segundo, eh %f", M);
    return 0;
}
