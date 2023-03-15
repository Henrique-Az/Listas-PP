#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, d1, d2, d3;
    printf("Insira um numero de tres digitos:\n");
    scanf("%d", &n);

    d1=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d3=n;

    printf("O numero, com seus digitos revertidos, eh %d", d3+10*d2+100*d1);
    return 0;


}
