#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int S;

    printf("Insira o valor do primeiro numero:"); //inserção dos três valores pelo usuário
    scanf("%d",&a);

    printf("Insira o valor do segundo numero:");
    scanf("%d",&b);

    printf("Insira o valor do terceiro numero:");
    scanf("%d",&c);

    S=a+b+c;  //definição da soma dos valores
    printf("A soma dos valores inseridos eh %d", S);
}
