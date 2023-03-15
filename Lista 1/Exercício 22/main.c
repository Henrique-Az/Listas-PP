#include <stdio.h>
#include <stdlib.h>

int main()
{
    float M, J;
    printf("Insira o valor do comprimento em jardas:\n");
    scanf("%f", &J);
    M=J*0.91;
    printf("O valor desse comprimento, em metros, eh %f", M);
    return 0;
}
