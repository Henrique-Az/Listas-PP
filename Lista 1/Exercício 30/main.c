#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d, r, c;

    printf("Insira o preco em reais:\n");
    scanf("%f", &r);

    printf("Insira a cotacao do dolar no momento:\n");
    scanf("%f", &c);

    d=r*c;
    printf("O preco inserido, em dolar, eh %f", d);

    return 0;


}
