#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int S;

    printf("Insira o valor do primeiro numero:"); //inser��o dos tr�s valores pelo usu�rio
    scanf("%d",&a);

    printf("Insira o valor do segundo numero:");
    scanf("%d",&b);

    printf("Insira o valor do terceiro numero:");
    scanf("%d",&c);

    S=a+b+c;  //defini��o da soma dos valores
    printf("A soma dos valores inseridos eh %d", S);
}
