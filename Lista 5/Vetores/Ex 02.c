#include<stdio.h>

int main(){
    float vet[8];
    int i, X, Y;
    printf("Insira os valores para o vetor:\n");
    for(i=0; i<8; i++){
        scanf("%f", &vet[i]);
    }
    do{
        printf("Insira as duas posicoes que devem ser somadas(de 0 a 7):\n");
        scanf("%d%d", &X, &Y);
        if(X<0||X>7||Y<0||Y>7){
            printf("Uma das posicoes eh invalida, tente novamente:\n\n");
        }
    }while(X<0||X>7||Y<0||Y>7);
    printf("A soma do valor dessas posicoes eh %d", vet[X]+vet[Y]);
    return 0;
}