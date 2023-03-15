#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p;

    printf("Insira o valor do produto:\n");

    scanf("%f", &p);

    printf("O valor desse produto, com desconto, eh %f", p*0.88);
    return 0;
}
