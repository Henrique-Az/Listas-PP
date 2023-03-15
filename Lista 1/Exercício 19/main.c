#include <stdio.h>
#include <stdlib.h>

int main()
{
    float M, L;
    printf("Insira o valor do seu volume em litros:\n");
    scanf("%f", &L);
    M=L/1000;
    printf("O valor desse volume, em metros cubicos, eh %f", M);
    return 0;
}
