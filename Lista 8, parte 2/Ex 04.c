#include<stdio.h>

int main(){
    int a[5], i, aux=0;
    for(i=0; i<5; i++){
        printf("Insira o valor da posicao %d: ", i+1);
        scanf("%d", a+i);
        if(*(a+i)%2==0){
            aux++;
        }
    }
    if(aux==0){
        printf("Nao foi inserido nenhum par");
    } else{
        printf("Os valores inseridos pares estao nos enderecos:\n");
        for(i=0; i<5; i++){
            if(*(a+i)%2==0){
                printf("%p ", a+i);
            }
        }
    }
    return 0;
}