#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p, i, s;
    printf("Insira o tamanho desejado do vetor: ");
    scanf("%d", &s);
    if((p=(int*)malloc(s*sizeof(int)))==NULL){
        printf("Alocacao falhou!");
        exit(1);
    }
    for(i=0; i<s; i++){
        printf("Insira o valor desejado para a posicao %d: ", i+1);
        scanf("%d", p+i);
    }
    printf("O vetor lido eh: ");
    for(i=0; i<s; i++){
        printf("%d ", *(p+i));
    }
    free(p);
    return 0;
}