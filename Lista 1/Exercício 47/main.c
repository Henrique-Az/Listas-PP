#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, d1, d2, d3, d4;
    printf("Insira um numero de quatro digitos:\n");
    scanf("%d", &n);

    d1=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d4=n;

    printf("%d\n%d\n%d\n%d", d4, d3, d2, d1);
    return 0;
}
