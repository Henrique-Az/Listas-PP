#include<stdio.h>

void ordem(int *a, int *b){
    int aux;
    if(*b>*a){
        aux=*a;
        *a=*b;
        *b=aux;
    }
}

int main(){
    int a, b;

    printf("Insira dois inteiros: ");
    scanf("%d%d", &a, &b);
    ordem(&a, &b);
    printf("O maior valor eh %d e o menor eh %d", a, b);
    return 0;
}