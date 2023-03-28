#include<stdio.h>

int main(){
    float M, m, h;
    printf("Insira a base maior dessa trapezio: ");
    scanf("%f", &M);
    printf("Insira a base menor dessa trapezio: ");
    scanf("%f", &m);
    printf("Insira a altura dessa trapezio: ");
    scanf("%f", &h);

    if(M>0 && m>0 && h>0){
        printf("A area desse trapezio eh %.2f", (M+m)*h/2);
    }
    else{
        printf("Um dos valores eh invalido");
    }
    return 0;
}