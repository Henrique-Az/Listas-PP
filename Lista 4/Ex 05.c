#include<stdio.h>
#define pi 3.141592

float vol(float r){
    return r*r*r*pi;
}

int main(){
    float r;
    printf("Insira o valor do raio da esfera: ");
    scanf("%f", &r);
    if(r<=0){
        printf("Raio invalido");
    } else{
        printf("O volume da esfera de raio %.2f eh %.2f", r, vol(r));
    }
    return 0;
}