#include<stdio.h>

int main(){
    float p, h;
    printf("Insira a altura da pessoa: ");
    scanf("%f", &h);
    printf("Insira o peso da pessoa: ");
    scanf("%f", &p);
    if(p>0 && h>0){
        printf("A classificacao dessa pessoa eh ");
        if(h<1.2){
            if(p<60){
                printf("A");
            }else if(p<=90){
                printf("D");
            }else
                printf("G");
        }else if(h<=1.7){ //Não é necessário checar se ela tem mais de 1.2, se o primeiro if falhou, ela é maior
            if(p<60){
                printf("B");
            }else if(p<=90){
                printf("E");
            }else
                printf("H");
        }else
            if(p<60){
                printf("C");
            }else if(p<=90){
                printf("F");
            }else
                printf("I");
    } else{
        printf("Um dos valores inseridos eh invalido");
    }
    return 0;
}