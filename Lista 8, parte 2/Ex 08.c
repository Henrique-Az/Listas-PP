#include<stdio.h>

int main(){
    int A, *B=&A, **C=&B, ***D=&C;
    printf("Insira um numero: ");
    scanf("%d", B);
    printf("O dobro desse numero eh %d, o triplo eh %d e o quadruplo eh %d", *B*2, **C*3, ***D*4);
    return 0;
}