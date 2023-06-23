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

int main(){
    float **p;
    int m, n, i, mdig=1;
    printf("Insira as dimensoes da matriz: ");
    scanf("%d%d", &m, &n);
    if((p=(float **)malloc(m*sizeof(void *)))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    for(i=0; i<m; i++){
        if((p[i]=(float *)malloc(n*sizeof(float)))==NULL){
            printf("Erro de alocacao");
            exit(1);
        }
    }
    for(i=0; i<m*n; i++){
        printf("Insira o valor da posicao [%d][%d]: ", (i/m)+1, (i%n)+1);
        scanf("%f", &p[i/m][i%n]);
        if(dig(p[i/m][i%n])>mdig){
            mdig=dig(p[i/m][i%n]);
        }
    }
    printf("A matriz inserida foi:\n");
    for(i=0; i<m*n; i++){
        centraliza(dig(p[i/m][i%n]), mdig);
        printf("%.2f ", p[i/m][i%n]);
        if(i%n==n-1){
            printf("\n");
        }
    }
    for(i=0; i<m; i++){
        free(p[i]);
    }
    free(p);
    return 0;
}