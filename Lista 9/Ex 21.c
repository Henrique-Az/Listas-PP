#include<stdio.h>
#include<stdlib.h>

int dig(float n){
    int i=1;
    if(n<0){
        i++;
        n*=-1;
    }
    for(; n>10; i++){
        n/=10;
    }
    return i;
}

void centraliza(int d, int md){
    int i;
    for(i=md-d; i>0; i--){
        printf(" ");
    }
}

float **MatProduct(float **m1, int a, int b, float **m2, int c, int d, int *md){
    float **res=NULL;
    int i, j, k;
    if(b!=c){
        return NULL;
    }
    if((res=(float **)malloc(a*sizeof(void *)))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    for(i=0; i<a; i++){
        if((res[i]=(float*)malloc(d*sizeof(float)))==NULL){
            printf("Erro de alocacao");
            exit(1);
        }
    }
    for(i=0, *md=0; i<a; i++){
        for(j=0; j<d; j++){
            for(k=0, res[i][j]=0; k<b; k++){
                res[i][j]+=m1[i][k]*m2[k][j];
                if(dig(res[i][j])<*md){
                    *md=dig(res[i][j]);
                }
            }
        }
    }
    return res;
}

int main(){
    int a, b, c, d, i, j, md;
    float **mat1, **mat2, **res;
    printf("Insira as dimensoes da primeira matriz: ");
    scanf("%d%d", &a, &b);
    while(a<=0||b<=0){
        printf("Dimensoes invalidas, tente novamente: ");
        scanf("%d%d", &a, &b);
    }
    if((mat1=(float **)malloc(a*sizeof(float *)))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    for(i=0; i<a; i++){
        if((mat1[i]=(float *)malloc(b*sizeof(float)))==NULL){
            printf("Erro de alocacao");
            exit(1);
        }
    }
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            printf("Insira o valor da posicao [%d][%d] da matriz: ", i+1, j+1);
            scanf("%f", &mat1[i][j]);
        }
    }
    printf("Insira as dimensoes da segunda matriz: ");
    scanf("%d%d", &c, &d);
    while(c<=0||d<=0){
        printf("Dimensoes invalidas, tente novamente: ");
    }
    if((mat2=(float **)malloc(c*sizeof(float *)))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    for(i=0; i<c; i++){
        if((mat2[i]=(float *)malloc(d*sizeof(float)))==NULL){
            printf("Erro de alocacao");
            exit(1);
        }
    }
    for(i=0; i<c; i++){
        for(j=0; j<d; j++){
            printf("Insira a posicao [%d][%d] da matriz: ", i+1, j+1);
            scanf("%f", &mat2[i][j]);
        }
    }
    if((res=MatProduct(mat1, a, b, mat2, c, d, &md))==NULL){
        printf("O produto entre essas matrizes nao esta definido");
    } else{
        for(i=0; i<a; i++){
            for(j=0; j<d; j++){
                centraliza(res[i][j], md);
                printf("%.2f ", res[i][j]);
            }
            printf("\n");
        }
    }
    for(i=0; i<d; i++){
        free(res[i]);
        free(mat2[i]);
    }
    for(i=0; i<b; i++){
        free(mat1[i]);
    }
    free(mat1);
    free(mat2);
    free(res);
    return 0;
}