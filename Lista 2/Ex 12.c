#include<stdio.h>
#include<math.h>

int main(){
    int x;
    float y;
    printf("Insira um numero positivo: ");
    scanf("%d", &x);
    if(x<=0){//também não se pode fazer o logaritmo de 0, 10 elevado a qualquer coisa é maior que 0
    printf("Numero invalido");}
    else{
        y=log10(x); //assume-se que a base é 10 para "logaritmo"
        printf("O logaritmo desse numero eh %.2f", y);
    }
    return 0;
}