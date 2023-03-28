#include<stdio.h>
#include<math.h>
int main(){
    int m1, h1, m2, h2, t1, t2, t, horas;
    printf("Insira a hora de chegada: ");
    scanf("%d", &h1);
    printf("Insira o minuto de chegada: ");
    scanf("%d", &m1);
    printf("Insira a hora de saida: ");
    scanf("%d", &h2);
    printf("Insira o minuto de saida: ");
    scanf("%d", &m2);

    t1=h1*60+m1; //coloca tudo em minutos
    t2=h2*60+m2;
    t=t2-t1;
    if(t<0){
        t=t2+1440-t1; //Se for negativo, significa que passou um dia, soma os minutos que tem em um dia para compensar
    }
    horas=ceil((float)t/60);
    if(horas>4){
        printf("Deve ser pago %.2f", 4.8+2*(horas-4)); //4.8 se torna um valor fixo para mais de 4 horas, conta-se apenas o valor do excedente das 4 horas
    } else if(horas>2){
        printf("Deve ser pago %.2f", 2+1.4*(horas-2));
    } else{
        printf("Deve ser pago %d", horas);
    }
    return 0;

}