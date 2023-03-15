#include <stdio.h>
#include <stdlib.h>

int main()
{
    float P, C;
    printf("Insira o valor do seu comprimento em centimetros:\n");
    scanf("%f", &C);
    P=C/2.54;
    printf("O valor desse comprimento, em polegadas eh %f", P);
    return 0;
}
