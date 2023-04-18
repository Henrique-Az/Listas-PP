#include<stdio.h>

int seg(int h, int m, int s){
    return 3600*h+60*m+s;
}

int main(){
    int h,m,s;
    printf("Insira a quantidade de horas: ");
    scanf("%d", &h);
    printf("Insira a quantidade de minutos: ");
    scanf("%d", &m);
    printf("Insira a quantidade de segundos: ");
    scanf("%d", &s);
    printf("A quantidade de segundos seria %d", seg(h,m,s));
    return 0;
}