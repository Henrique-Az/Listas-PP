#include <stdio.h>
#include <stdlib.h>

int main()
{
    char car;
    printf("Digite o seu caractere maiusculo:\n");

    scanf("%c", &car);

    printf("Esse caractere, minusculo, fica \"%c\"", car+32);
    return 0;
}
