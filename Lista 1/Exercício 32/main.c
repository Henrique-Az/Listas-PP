#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, S;

    printf("Insira o numero desejado:\n");

    scanf("%i", &n);

    S=(n*3+1)+(n*2-1); //também pode ser escrito simplesmente como 5n, +1 e -1 se anulam

    printf("A soma do sucessor do triplo desse numero e do antecessor de seu dobro eh %i", S);
    return 0;
}
