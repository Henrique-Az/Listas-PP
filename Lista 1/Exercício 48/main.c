#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, m, h, temp;
    //temp sendo uma vari�vel para guardar valores temporariamente

    printf("Insira um valor em segundos:\n");
    scanf("%d", &t);

    temp=t%3600; //temp guarda o resto de segundos ap�s dividir por 1 ou mais horas
    h=t/3600; //calcula quantas horas tem nesse intervalo de tempo, se n�o tiver nenhuma, arredonda pra 0
    m=temp/60; //quantos minutos tem no resto de tempo
    temp=temp%60; //quantos segundos sobram ap�s colocar em minutos

    printf("Esse tempo eh equivalente a %d(h):%d(min):%d(s)", h, m, temp);
    return 0;
}
