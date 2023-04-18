#include<stdio.h>

int dobro(int a){
    return 2*a;
}

int main(){
    int x;
    printf("Insira um valor: ");
    scanf("%d", &x);
    printf("O dobro de %d eh %d", x, dobro(x));
    return 0;
}