#include <stdio.h>
#include <stdlib.h>

int main()
{
    float P, C;
    printf("Insira o valor do seu comprimento em polegadas:\n");
    scanf("%f", &P);
    C=P*2.54;
    printf("O valor desse comprimento, em centimetros eh %f", C);
    return 0;
}
