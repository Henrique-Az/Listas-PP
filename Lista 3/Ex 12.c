#include<stdio.h>

int main(){
    int a, i, sum=0;

    printf("Insira o numero desejado: ");
    scanf("%d", &a);

    for(i=1; i<a; i++){
        if(a%i==0){
            printf("%d ", i);
            sum+=i;
        }
    }
    printf("A soma eh %d", sum);
    return 0;
}