#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K, M; //agora M n�o significa mais metros por segundo

    printf("Insira o valor da sua distancia em milhas:\n");
    scanf("%f", &M);
    K=1.61*M;
    printf("O valor da sua dist�ncia, em quilometros, eh %f", K);
    return 0;
}
