#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a1, a2, a3, s, p;
    printf("Quanto o primeiro apostador investiu?\n");
    scanf("%f", &a1);

    printf("Quanto o segundo apostador investiu?\n");
    scanf("%f", &a2);

    printf("Quanto o terceiro apostador investiu?\n");
    scanf("%f", &a3);
    s=a1+a2+a3;

    printf("Qual foi o valor do premio ganho?");
    scanf("%f", &p);

    printf("O primeiro apostador recebeu %.2f\nO segundo apostador recebeu%.2f\nOterceiro apostador recebeu%.2f\n", a1/s*p, a2/s*p, a3/s*p);

    return 0;
}
