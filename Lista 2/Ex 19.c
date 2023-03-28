#include<stdio.h>

int main(){
    printf("Insira o numero desejado: ");
    int a;
    scanf("%d", &a);
    if(((a%3==0) || (a%5==0)) && !((a%3==0) && (a%5==0))){
        printf("O numero escolido atende as especificacoes");
    }
    else{
        printf("O numero escolhido nao atende as especificacoes");
    }
    return 0;
}