#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s;
    printf("Insira o salario-base do funcionario:\n");
    scanf("%f", &s);

    printf("O valor recebido por esse funcionario eh %.2f", s*1.05-s*0.07);
    return 0;
}
