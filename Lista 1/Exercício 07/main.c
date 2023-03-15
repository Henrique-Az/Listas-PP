#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F,C;
    printf("Insira o valor da sua temperatura em graus Fahrenheit:");
    scanf("%f", &F);
    C=(F-32)*5/9;
    printf("Essa temperatura eh %f em graus Celsius", C);
    return 0;
}
