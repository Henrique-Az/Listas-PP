#include<stdio.h>

int ehtrian(float a, float b, float c){
    if((a<b+c && b<a+c && c<a+b) && (a>0 && b>0 && c>0)){
        printf("Os lados formam um triangulo\n");
        return 1;
    } else {
        printf("Os lados nao formam um triangulo\n");
        return 0;
    }
}

void tritipo(float a, float b, float c){
    if(ehtrian(a, b, c)){
        if(a==b && a==c){
            printf("O triangulo eh equilatero");
        } else if(a==b || a==c || b==c){
            printf("O triangulo eh isoceles");
        } else{
            printf("O triangulo eh escaleno");
        }
    }
}

int main(){
    float a, b, c;
    printf("Insira o valor dos tres lados do triangulo:\n");
    scanf("%f %f %f", &a, &b, &c);
    tritipo(a, b, c); //Como essa função já chama ehtrian(), não precisa chamar duas vezes
    return 0;
}