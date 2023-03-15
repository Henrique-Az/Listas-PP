#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p, s, t; //definindo os três prêmios
    p=780000*0.46;
    s=780000*0.32;
    t=780000-p-s;

    printf("O primeiro ganhador recebe %d\nO Segundo ganhador recebe %d\nO terceiro ganhador recebe %d", p, s, t);
    return 0;
}
