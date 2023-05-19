#include<stdio.h>

int dobro(int* p){
    return 2*(*p);
}

int main(){
    int A, B, *pA=&A, *pB=&B;

    printf("Insira os valores desejados de A e B: ");
    scanf("%d%d", pA, pB);
    *pA=dobro(pA);
    *pB=dobro(pB);

    printf("A soma do dobro dessas variaveis eh %d", *pA+*pB);
    return 0;
}