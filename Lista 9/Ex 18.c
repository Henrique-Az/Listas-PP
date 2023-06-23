#include<stdio.h>
#include<stdlib.h>

struct registro{
    char nome[30];
    int cod;
    float pr;
};

int main(){
    char *v;
    int **mat, i;
    struct registro *r;
    char **txt;

    if((v=(char *)malloc(1024))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    if((mat=(int **)malloc(10*sizeof(void *)))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    for(i=0; i<10; i++){
        if((mat[i]=(int *)malloc(10*sizeof(int)))==NULL){
            printf("Erro de alocacao");
            exit(1);
        }
    }
    if((r=(struct registro *)malloc(50*sizeof(struct registro)))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    if((txt=(char **)malloc(100*sizeof(void *)))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    for(i=0; i<100; i++){
        if((txt[i]=(char *)malloc(80*sizeof(char)))==NULL){
            printf("Erro de alocacao");
            exit(1);
        }
    }
    free(v);
    for(i=0; i<10; i++){
        free(mat[i]);
    }
    free(mat);
    free(r);
    for(i=0; i<100; i++){
        free(txt[i]);
    }
    free(txt);
    return 0;
}