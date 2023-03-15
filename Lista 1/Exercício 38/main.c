#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s;

    printf("Insira o antigo salario do funcionario:\n");

    scanf("%f", &s);

    printf("O novo salario desse funcionario eh %f", s*1.25);

    return 0;
}
