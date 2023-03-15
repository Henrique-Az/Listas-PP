#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, dist;

    printf("Digite a abscissa(coordenada x) do ponto:\n");
    scanf("%f", &x);
    printf("Digite a ordenada(coordenada y) do ponto:\n");
    scanf("%f", &y);
    dist=sqrt(x*x+y*y);
    printf("A distancia desse ponto da origem eh %f", dist);

    return 0;
}
