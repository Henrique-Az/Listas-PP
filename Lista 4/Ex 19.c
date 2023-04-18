#include<stdio.h>

int fat(int n){
    if(n==1){
        return 1;
    }
    return n*fat(n-1);
}

int main(){
    int a;
    printf("Insira qual fatorial se quer calcular: ");
    scanf("%d", &a);
    printf("%d! eh igual a %d", a, fat(a));
    return 0;
}