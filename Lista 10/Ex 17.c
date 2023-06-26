#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *fp, *r;
    int m, n, aux, a, b, i, **mat;

    if((fp=fopen("matriz.txt", "r"))==NULL){
        printf("O arquivo nao foi encontrado");
        exit(1);
    }
    if((r=fopen("matriz_saida.txt", "w"))==NULL){
        printf("Erro na criacao do arquivo");
        exit(1);
    }
    fscanf(fp, "%d%d%d", &m, &n, &aux);
    if((mat=(int **)malloc(m*sizeof(int *)))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    for(i=0; i<m; i++){
        if((mat[i]=(int *)malloc(n*sizeof(int)))==NULL){
            printf("Erro de alocacao");
            exit(1);
        }
        for(a=0; a<n; a++){
            mat[i][a]=1;
        }
    }
    for(i=0; i<aux; i++){
        fscanf(fp, "%d%d", &a, &b);
        mat[a][b]=0;
    }
    for(i=0; i<m; i++){
        for(aux=0; aux<n; aux++){
            fprintf(r, "%d ", mat[i][aux]);
        }
        fputc('\n', r);
    }
    printf("O arquivo foi criado com sucesso");
    fclose(fp);
    fclose(r);
    for(i=0; i<m; i++){
        free(mat[i]);
    }
    free(mat);
    return 0;
}