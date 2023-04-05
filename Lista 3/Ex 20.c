#include<stdio.h>
#include<math.h>

int main(){
    long i, c, d;
    float a;
    double s=-1;
    for(i=1; i<=2000000; i++){
        d=0;
        a=sqrt(i);
        for(c=1; c<=a; c++){ /*Um número sempre tem um número par de divisores, o fator (n-1), do par de divisores da forma (n-1)(n+1), 
        é o máximo que um número pode chegar sem ter aparecido nenhum divisor anterior a ele, por isso, 
        como esse fator é menor do que a raiz do número, é permitido essa optimização*/
            if(i%c==0){
                d++;
            }
        }
        if(d==1){ //Como eu não estou checando se o número é divisível por ele mesmo, um primo tem que ter 1 divisor
            s+=i; //Problema dessa implementação é que, para o programa, 1 se torna primo, por isso foi definido que s=-1
        }    
    }
    printf("%.f", s);
    return 0;
}