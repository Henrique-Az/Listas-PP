#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p, h;
    char s;
    printf("Insira o sexo da pessoa(M/F):\n");
    s=getchar();
    printf("Insira a altura da pessoa:\n");
    scanf("%f", &h);

    if(s=='M'){
        p=72.7*h-58;
        printf("O peso ideal dessa pessoa eh %.f", p);
    }
    if(s=='F'){ //Isso para garantir que o programa n�o ir� rodar se a pessoa inserir algo al�m de M ou F
        p=62.1*h-44.7;
        printf("O peso ideal dessa pessoa eh &.f", p);
    }
    return 0;
}
