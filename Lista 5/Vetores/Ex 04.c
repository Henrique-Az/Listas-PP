#include<stdio.h>

int main(){
    int vet[5], maior, menor, i;
    printf("Insira os 5 valores:\n");
    for(i=0; i<5; i++){
        scanf("%d", &vet[i]);
    }
    maior=0;
    menor=0;
    for(i=1; i<5; i++){
        if(vet[i]>vet[maior]){
            maior=i;
        }else if(vet[i]<vet[menor]){
            menor=i;
        }
    }
    printf("O maior numero esta na posicao %d e o menor na posicao %d", maior, menor);
    return 0;
}