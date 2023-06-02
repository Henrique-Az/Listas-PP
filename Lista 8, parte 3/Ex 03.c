#include<stdio.h>

void sum(int *a, int *b){
    *a+=*b;
}

int main(){
    int a, b;
    printf("Insira dois inteiros: ");
    scanf("%d%d", &a, &b);
    sum(&a, &b);
    printf("A soma (A) eh %d e B eh %d", a, b);
    return 0;
}