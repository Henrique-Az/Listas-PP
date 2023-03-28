#include<stdio.h>

int main(){
    printf("Insira o valor dos tres lados do triangulo: \n");
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if(a>0 && b>0 && c>0 && (a<b+c) && (b<a+c) && (c<a+b)){
        if(a==b && b==c && c==a){
            printf("O triangulo eh equilatero");
        }
        else if(a==b || b==c || a==c){
            printf("O triangulo eh isoceles");
        }
        else{
            printf("O triangulo eh escaleno");
        }
    }
    else{
        printf("Os valores inseridos nao definem um triangulo");
    }
    return 0;
}