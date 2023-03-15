#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d, h;

    printf("Digite o valor do degrau da escada(em cm):\n");
    scanf("%f", &d);

    printf("Digite a altura(em m) que deve ser atingida com essa escada:\n");
    scanf("%f", &h);

    printf("A quantidade de degraus eh %.2f",h*100/d);

    return 0;


}
