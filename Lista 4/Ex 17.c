#include<stdio.h>
#include<stdlib.h>

int sum(int a, int b){
    int aux, sum=0;
    if(a<0 || b<0){
        printf("Numeros invalidos");
        exit(1);
    }
    if(a>b){ //Se o maior vier primeiro, inverte a com b
        aux=b;
        b=a;
        a=aux;
    }
    for(a++; a<b; a++){ //Inicializa como a++, porque não se quer somar o proprio a
        sum+=a;
    }
    return sum;
}

int main(){
    int a, b;
    printf("Insira dois valores positivos:\n");
    scanf("%d %d", &a, &b);
    printf("A soma dos numeros entre eles eh %d", sum(a, b));
    return 0;
}