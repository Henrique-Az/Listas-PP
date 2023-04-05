#include<stdio.h>
#include<math.h>

int main(){
    int a, b, dig, exp, prod, maior=0, aux;
    float pal;
    for(a=100; a<1000; a++){
        for(b=100; b<1000; b++){
        prod=a*b;
        aux=prod;
        exp=0;
        pal=0;
        while(aux>10){
            aux/=10;
            exp++;
        }
        aux=prod;
        while(aux>0){
            dig=aux%10;
            aux/=10;
            pal+=dig*pow(10, exp); //precisei de pal como float, programa não estava corretamente passando de float pra int
            exp--;
        }
            if((int)pal==prod){
                maior=prod;
            }
        }
    }
    printf("%d", maior);
    return 0;
}