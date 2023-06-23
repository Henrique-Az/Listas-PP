#include<stdio.h>
#include<stdlib.h>

int main(){
    int **p, **t, N, M, i, j;
    printf("Insira as dimensoes da matriz: ");
    scanf("%d%d", &N, &M);
    while((N<=0||M<=0)){
        printf("Entradas invalidas, tente novamente: ");
        scanf("%d%d", &N, &M);
    }
    if((p=(int **)malloc(N*sizeof(void *)))==NULL||(t=(int **)malloc(M*sizeof(void *)))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    for(i=0; i<N; i++){
        if((p[i]=(int *)malloc(M*sizeof(int)))==NULL){
            printf("Erro de alocacao");
            exit(1);
        }
    }
    for(i=0; i<M; i++){
        if((t[i]=(int *)malloc(N*sizeof(int)))==NULL){
            printf("Erro de alocacao");
            exit(1);
        }
    }
    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            printf("Insira o valor da posicao [%d][%d]: ", i+1, j+1);
            scanf("%d", &p[i][j]);
            t[j][i]=p[i][j];
        }
    }
    printf("A matriz inserida eh:\n");
    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    printf("\nA transposta da matriz eh:\n");
    for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<N; i++){
        free(p[i]);
    }
    for(i=0; i<M; i++){
        free(p[i]);
    }
    free(p);
    free(t);
    return 0;
}