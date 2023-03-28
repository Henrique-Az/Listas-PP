#include<stdio.h>

int main(){
    float p;
    printf("Insira o valor de venda do vendedor: ");
    scanf("%f", &p);
    printf("A comissao para esse vendedor deve ser: ");
    if(p>=100000){
        printf("%.2f", p*1.16 + 700);
    } else if(p>=80000){
        printf("%.2f", p*1.14 + 650);
    } else if(p>=60000){
        printf("%.2f", p*1.14 + 600);
    } else if(p>=40000){
        printf("%.2f", p*1.14 + 550);
    } else if(p>=20000){
        printf("%.2f", p*1.14 + 500);
    } else{
        printf("%.2f", p*1.14 + 400);
    }
    return 0;
}