#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K, M;
    printf("Insira o valor da sua velocidade em m/s:\n");
    scanf("%f", &M);
    K=M*3.6;
    printf("Essa velocidade, em quilometros por hora, eh %f", K);
    return 0;
}
