#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, S;
    printf("Insira, sequencialmente, os tres valores desejados:\n");
    scanf("%f %f %f", &a, &b, &c);
    S=a*a+b*b+c*c;
    printf("A soma do quadrado desses numeros eh %f", S);
    return 0;
}
