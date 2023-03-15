#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Insira o numero desejado:\n");

    scanf("%i", &n);

    printf("O seu antecessor eh %i e o seu sucessor eh %i", n-1, n+1);
    return 0;
}
