#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v;
    int h;
    /*Esse programa desconsidera a possibilidade de fra��es de
    1 hora como remuneradas(s� aceita inteiros)*/

    printf("Insira o valor da hora de trabalho:\n");
    scanf("%f", &v);
    printf("Insira as horas trabalhadas no mes:\n");
    scanf("%d", &h);
    printf("Esse funcionario deve receber %.2f", v*h);

    return 0;
}
