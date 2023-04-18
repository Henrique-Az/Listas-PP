#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float hip(float a, float b){
    if(a<=0 || b<=0){
        printf("Lados invalidos");
        exit(1);
    }
    return sqrt(a*a+b*b);
}

int main(){
    float a, b;
    printf("Insira o valor dos dois catetos do triangulo:\n");
    scanf("%f %f", &a, &b);
    printf("O valor dos lados da hipotenusa eh %.2f", hip(a, b));
    return 0;
}