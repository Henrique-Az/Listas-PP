#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, m, h, temp;
    //temp sendo uma variável para guardar valores temporariamente

    printf("Insira um valor em segundos:\n");
    scanf("%d", &t);

    temp=t%3600; //temp guarda o resto de segundos após dividir por 1 ou mais horas
    h=t/3600; //calcula quantas horas tem nesse intervalo de tempo, se não tiver nenhuma, arredonda pra 0
    m=temp/60; //quantos minutos tem no resto de tempo
    temp=temp%60; //quantos segundos sobram após colocar em minutos

    printf("Esse tempo eh equivalente a %d(h):%d(min):%d(s)", h, m, temp);
    return 0;
}
