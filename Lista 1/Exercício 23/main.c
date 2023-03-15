#include <stdio.h>
#include <stdlib.h>

int main()
{
    float M, J;
    printf("Insira o valor do comprimento em metros:\n");
    scanf("%f", &M);
    J=M/0.91;
    printf("O valor desse comprimento, em jardas, eh %f", J);
    return 0;
}
