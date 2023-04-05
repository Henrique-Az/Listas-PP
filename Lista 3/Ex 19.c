#include<stdio.h>

int main(){
    int cem=0, cinq=0, vin=0, dez=0, cin=0, dois=0, saq;
    printf("Insira o valor do saque: ");
    scanf("%d", &saq);
    while(saq<0){
        printf("Invalido, insira um valor positivo: ");
        scanf("%d", &saq);
    }
    while(saq>2){
        if(saq>=100){
            saq-=100;
            cem++;
        } else if(saq>=50){
            saq-=50;
            cinq++;
        } else if(saq>=20){
            saq-=20;
            vin++;
        } else if(saq>=10){
            saq-=10;
            dez++;
        } else if(saq>=5){
            saq-=5;
            cin++;
        } else if(saq>=2){
            saq-=2;
            dois++;
        } //Resto de saq vira tudo nota de 1
    }
    printf("Sao necessarias %d notas de 100, %d notas de 50, %d notas de 20, %d notas de 10, %d notas de 5, %d notas de 2, %d notas de 1", cem, cinq, vin, dez, cin, dois, saq);
}