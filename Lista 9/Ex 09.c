#include<stdio.h>
#include<stdlib.h>

int main(){
    float *p, n=0;
    int i;
    if((p=(float *)malloc(sizeof(float)))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    for(i=1; ; i++){
        printf("Insira um numero para adicionar ao vetor(insira um negativo para parada): ");
        scanf("%f", &n);
        if(n<=0){
            break;
        }
        if((p=(float *)realloc(p, i*sizeof(float)))==NULL){
            printf("Erro de alocacao");
            exit(1);
        }
        p[i-1]=n;
    }
    n=i-1;
    printf("O vetor inserido eh: ");
    for(i=0; i<n; i++){
        printf("%.1f ", p[i]);
    }
    free(p);
    return 0;
}