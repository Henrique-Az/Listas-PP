#include<stdio.h>

int main(){
    int a[5], i;
    for(i=0; i<5; i++){
        printf("Insira o valor da posicao %d: ", i+1);
        scanf("%d", a+i);
    }
    printf("O dobro dos valores lidos sao:\n");
    for(i=0; i<5; i++){
        printf("%d ", *(a+i)*2);
    }
    return 0;
}