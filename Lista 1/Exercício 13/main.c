#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K, M; //agora M n�o significa mais metros por segundo

    printf("Insira o valor da sua distancia em quilometros:\n");
    scanf("%f", &K);
    M=K/1.61;
    printf("O valor da sua dist�ncia, em milhas, eh %f", M);
    return 0;
}
