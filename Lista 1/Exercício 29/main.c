#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,n4,m;

    printf("Insira o valor da primeira nota:\n");
    scanf("%f", &n1);

    printf("Insira o valor da segunda nota:\n");
    scanf("%f", &n2);

    printf("Insira o valor da terceira nota:\n");
    scanf("%f", &n3);

    printf("Insira o valor da quarta nota:\n");
    scanf("%f", &n4);

    m=(n1+n2+n3+n4)/4;

    printf("O valor da media das quatro notas eh %f", m);
    return 0;
}
