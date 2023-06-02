#include<stdio.h>

int ordem(int *a, int *b, int *c){
    int aux;
    if(*a==*b && *b==*c){
        return 1;
    }
    if(*b>*a){
        aux=*a;
        *a=*b;
        *b=aux;
    }
    if(*c>*a){
        aux=*c;
        *c=*b;
        *b=*a;
        *a=aux;
    } else if(*c>*b){
        aux=*c;
        *c=*b;
        *b=aux;
    }
    return 0;
}

int main(){
    int a, b, c;

    printf("Insira tres inteiros: ");
    scanf("%d%d%d", &a, &b, &c);
    if(ordem(&a, &b, &c)){
        printf("Os tres valores sao iguais");
    } else{
        printf("Os valores ordenados sao: %d %d %d", c, b, a);
    }
    return 0;
}