#include<stdio.h>

int main(){
    int age;
    printf("Insira a idade do nadador: ");
    scanf("%d", &age);
    if(age<5){
        printf("Idade insuficiente");
    } else{
        printf("A categoria do nadador eh ");
        if(age>=5 && age<=7){
            printf("infantil A");
        } else if(age>=8 && age<=10){
            printf("infantil B");
        } else if(age>=11 && age<=13){
            printf("juvenil A");
        } else if(age>=14 && age<=17){
            printf("juvenil B");
        }else{
            printf("senior");
        }
    }
    return 0;
}