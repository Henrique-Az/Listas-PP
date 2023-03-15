#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K, L;
    printf("Insira o valor da massa em quilogramas:\n");
    scanf("%f", &K);
    L=K/0.45;
    printf("O valor dessa massa, em libras, eh %f", L);
    return 0;
}
