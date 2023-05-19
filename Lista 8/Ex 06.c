#include<stdio.h>

float div(int* p, int* P){
    return *p/(float)*P;
}

int main(){
    int a, b, *pa=&a, *pb=&b;

    printf("Insira o valor dessas duas variaveis: ");
    scanf("%d%d", pa, pb);

    printf("\nA soma desses valores eh %d\n", *pa+*pb);
    printf("A subtracao desses valores eh %d\n", *pa-*pb);
    printf("A multiplicacao desses valores eh %d\n", *pa**pb);
    printf("A divisao desses valores eh %.2f\n", div(pa, pb));
    return 0;
}