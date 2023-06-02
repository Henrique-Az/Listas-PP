#include<stdio.h>
#define pi 3.141592

void calc_esfera(float R, float *area, float *volume){
    *area=4*pi*R*R;
    *volume=4*pi*R*R*R/3;
}

int main(){
    float r, a, v;

    printf("Insira o valor do raio da esfera: ");
    scanf("%f", &r);
    calc_esfera(r, &a, &v);
    printf("O valor do volume eh %.2f e da area eh %.2f", v, a);
    return 0;
}