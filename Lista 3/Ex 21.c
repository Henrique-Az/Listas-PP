#include<stdio.h>
#include<math.h>

int main(){
    long i, c, d;
    float a, b;
    double q=0;
    printf("Insira os menor numero: ");
    scanf("%f", &a);
    a=ceil(a);
    printf("Insira o maior numero: ");
    scanf("%f", &b);
    b=floor(b);
    if(a==1){
        q--; //Corrigindo o fato do meu programa considerar 1 como primo
    }
        for(i=a; i<=b; i++){
        d=0;
        a=sqrt(i);
        for(c=1; c<=a; c++){ /*Um número sempre tem um número par de divisores, o fator (n-1), do par de divisores da forma (n-1)(n+1), 
        é o máximo que um número pode chegar sem ter aparecido nenhum divisor anterior a ele, por isso, esse vetor é menor do que a raiz do número, permitindo essa optimização*/
            if(i%c==0){
                d++;
            }
        }
        if(d==1){ //Como eu não estou checando se o número é divisível por ele mesmo, um primo tem que ter 1 divisor
            q++; //Problema dessa implementação é que, para o programa, 1 se torna primo, por isso foi definido que s=-1
        }    
    }
    printf("\nExistem %.f primos entre esses dois numeros", q);
    return 0;
}