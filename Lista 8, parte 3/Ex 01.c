#include<stdio.h>

void troca(int *a, int *b){
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}

int main(){
    int a, b;

    printf("Insira dois inteiros: ");
    scanf("%d%d", &a, &b);
    printf("Antes da troca, o primeiro valor eh %d e o segundo %d\n\n", a, b);
    troca(&a, &b);
    printf("Apos a troca, o primeiro valor ficou %d e o segundo %d", a, b);
    return 0;
}