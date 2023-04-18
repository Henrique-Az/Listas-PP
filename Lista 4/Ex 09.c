#include<stdio.h>
#include<stdlib.h>
#define pi 3.141592

float vol(float r, float h){
    if(r<=0||h<=0){
        printf("Valores invalidos");
        exit(1);
    }
    return pi*r*r*h;
}

int main(){
    float r, h;
    printf("Insira o valor do raio: ");
    scanf("%f", &r);
    printf("Insira o valor da altura: ");
    scanf("%f", &h);

    printf("O volume desse cilindro eh %.2f", vol(r, h));
    return 0;
}