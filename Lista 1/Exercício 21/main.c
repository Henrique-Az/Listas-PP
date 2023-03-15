#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K, L;
    printf("Insira o valor da massa em libras:\n");
    scanf("%f", &L);
    K=L*0.45;
    printf("O valor dessa massa, em quilogramas, eh %f", K);
    return 0;
}
