#include<stdio.h>
#include<stdlib.h>

int sumdig(int a){
    int sum=0, d;
    if(a<0){
        printf("Numero invalido");
        exit(1);
    }
    while(a>0){
        d=a%10;
        a/=10;
        sum+=d;
    }
    return sum;
}

int main(){
    int n;
    printf("Insira um numero: ");
    scanf("%d", &n);

    printf("A soma dos algarismos de %d eh %d", n, sumdig(n));
    return 0;
}