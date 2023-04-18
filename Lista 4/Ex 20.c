#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int primos(int N){
    int i, quant=0, p;
    float r;
    if(N<0){
        printf("Numero invalido");
        exit(1);
    }else{
        for(N-=1; N>1; N--){
            p=1;
            if((N%2==0 && N!=2) || N==1){ //Estou colocando todos os N pares(0 tambem entra na cond) e o 1 como não primos, menos o 2
                p=0;
            } else{
                r=sqrt((double)N);
                for(i=3; i<=r; i+=2){
                    if(N%i==0){
                        p=0;
                        break;
                    }
                }
            }
            if(p){
                quant++;
            }
        }
    }
    return quant;
}

int main(){
    int x;
    printf("Insira um numero: ");
    scanf("%d", &x);
    printf("Existem %d primos abaixo de %d", primos(x), x);
    return 0;
}