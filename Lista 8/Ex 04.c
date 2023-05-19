#include<stdio.h>

int main(){
    int x, y;

    printf("Insira o valor para as variaveis: ");
    scanf("%d%d", &x, &y);
    
    printf("\nA primeira variavel inserida tem valor de %p e a segunda de %p\n\n", &x, &y);

    if(&x>&y){
        printf("O conteudo do maior endereco eh %d", x);
    } else{
        printf("O conteudo do maior endereco eh %d", y);
    }
    return 0;
}