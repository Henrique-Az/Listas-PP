#include<stdio.h>

int main(){
    int N, i;
    printf("Insira um numero inteiro: ");
    do{
        scanf("%d", &N);
        if(N<0){
            printf("Numero invalido, tente novamente");
        }
    }while(N<0);

    for(i=0; i<N; i++){
        printf("%d ", i);
    }
    return 0;
}