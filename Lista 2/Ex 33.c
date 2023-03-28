#include<stdio.h>

int main(){
    float p;
    printf("Insira o valor do produto: ");
    scanf("%f", &p);
    printf("O valor do produto vai ser ");
    if(p<50){
        printf("%.2f", 1.05*p);
    }else if(p<=100){
        printf("%.2f", 1.1*p);
    }else{
        printf("%.2f", 1.15*p);
    }
    return 0;
}