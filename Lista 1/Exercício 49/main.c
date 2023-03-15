#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h1, m1, s1, h2, m2, s2, h3, m3, s3, dur, temp, resto;

    printf("Digite, nessa ordem, em que horas, em que minutos e em que segundos o experimento comecou:\n");
    scanf("%d %d %d", &h1, &m1, &s1);

    printf("Digite a duracao do experimento, em segundos:\n");
    scanf("%d", &dur);
    //conversão da duração em horas, minutos e segundos

    temp=dur%3600; //temp guarda o resto de segundos após dividir por 1 ou mais horas
    h2=dur/3600; //calcula quantas horas tem nesse intervalo de tempo, se não tiver nenhuma, arredonda pra 0
    m2=temp/60; //quantos minutos tem no resto de tempo
    s2=temp%60; //quantos segundos sobram após colocar em minutos

    s3=(s2+s1)%60; //calcula em que segundo você "para", e tirando 60 caso a soma exceda 60 segundos
    m3=(m2+m1+(s2+s1)/60)%60;
    /*calcula em que minuto você "para", soma 1 minuto caso a soma s2+s1
    exceda 60 segundos, depois tira 60 minutos caso a soma exceda os 60 minutos*/

    h3=(h2+h1+(m2+m1+(s2+s1)/60)/60)%24;
    /*calcula em que minuto você para, soma 1 se (m2+m1+(s2+s1)/60) for maior que 60
    depois tira 24*n horas caso o experimento termine em outro dia, n sendo o número de dias que durou*/

    printf("Esse experimento acabou %d(h):%d(min):%d(s), %d dia(s) depois", h3, m3, s3, (h2+h1+(m2+m1+(s2+s1)/60)/60)/24);
    return 0;
}
