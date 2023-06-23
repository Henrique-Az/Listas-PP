#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p, N, X, mult;
    printf("Insira a quantidade de numeros que devem ser inseridos: ");
    scanf("%d", &N);
    if((p=(int *)malloc(N*sizeof(int)))==NULL){
        printf("A alocacao falhou");
        exit(1);
    }
    for(X=0; X<N; X++){
        printf("Insira o valor da %d%c posicao: ", X+1, 167);
        scanf("%d", p+X);
    }
    printf("Insira o inteiro que deve ser o divisor dos numeros do vetor: ");
    scanf("%d", &X);
    for(mult=0, N--; N>=0; N--){
        if(p[N]%X==0){
            mult++;
        }
    }
    printf("O vetor tem %d multiplos de %d", mult, X);
    free(p);
    return 0;
}