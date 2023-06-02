#include<stdio.h>

void frac(float num, int *inteiro, float *frac){
    *inteiro=(int)num;
    *frac=num-*inteiro;
}

int main(){
    int i;
    float n, f;

    printf("Insira um numero: ");
    scanf("%f", &n);
    frac(n, &i, &f);
    printf("A parte inteira desse numero eh %d e a parte fracionaria eh %f", i, f);
    return 0;
}