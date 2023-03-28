#include<stdio.h>

int main(){
    float p;
    printf("Insira o preco de fabrica do carro: ");
    scanf("%f", &p);
    if(p<=12000){
        p*=1.05;
    } else if(p<=25000){
        p=1.25*p;
    } else{
        p=1.35*p;
    }
    printf("O custo ao consumidor desse carro eh %.2f", p);
    return 0;
}