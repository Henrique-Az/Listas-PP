#include<stdio.h>
#include<stdlib.h>

int rep(int**mat, int c, int l, int aux){
    int i, j;
    for(i=0; i<c; i++){
        for(j=0; j<l; j++){
            if(mat[i][j]==aux){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int **i, c, l, aux, aux1;
    printf("Insira a quantidade de colunas da matriz: ");
    scanf("%d", &c);
    while(c<0){
        printf("Valor invalido, tente novamente: ");
        scanf("%d", &c);
    }
    if((i=(int **)malloc(c*sizeof(void *)))==NULL){
        printf("Erro de alocacao: ");
        exit(1);
    }
    printf("Insira a quantidade de linhas da matriz: ");
    scanf("%d", &l);
    while(l<0){
        printf("Valor invalido, tente novamente: ");
        scanf("%d", &l);
    }
    for(aux=0; aux<c; aux++){
        if((i[aux]=(int *)malloc(l*sizeof(int)))==NULL){
            printf("Erro de alocacao");
            exit(1);
        }
    }
    for(aux=0; aux<c; aux++){
        for(aux1=0; aux1<l; aux1++){
            printf("Insira o valor da posicao [%d][%d]: ", aux+1, aux1+1);
            scanf("%d", &i[aux][aux1]);
        }
    }
    printf("Insira que valor deve ser buscado: ");
    scanf("%d", &aux);
    if(rep(i, c, l, aux)){
        printf("O numero esta na matriz");
    } else{
        printf("O numero nao esta na matriz");
    }
    for(c--; c<=0; c--){
        free(i[c]);
    }
    free(i);
    return 0;
}