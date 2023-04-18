#include<stdio.h>

float maior(float a, float b){
    if(a>b){
        return a;
    } else{ //Isso tambem considera o caso em que a e b são iguais, em que pode retornar qualquer como maior
        return b;
    }
}

int main(){
    float x, y;
    printf("Insira os dois numeros:\n");
    scanf("%f %f", &x, &y);
    printf("O maior eh %.2f", maior( x, y));
    return 0;
}