#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int i, a, len;
    char **p;
    float *n;
    FILE *fp;

    if((fp=fopen("notas.txt", "w"))==NULL){
        printf("Nao foi possivel criar o arquivo");
        exit(1);
    }

    printf("Insira quantos alunos devem ser incluidos: ");
    scanf("%d", &i);
    if((p=(char **)malloc(i*sizeof(char *)))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    for(a=0; a<i; a++){
        if((p[a]=(char *)malloc(42*sizeof(char)))==NULL){
            printf("Erro de alocacao");
            exit(1);
        }
    }
    if((n=(float *)malloc(i*sizeof(float)))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    for(a=0; a<i; a++){
        printf("Insira o nome do %d%c aluno: ", a+1, 167);
        setbuf(stdin, NULL);
        fgets(p[a], 42, stdin);
        len=strlen(p[a])-1;
        p[a][len]='\0';
        printf("Insira a nota desse aluno: ");
        scanf("%f", &n[a]);
        fprintf(fp, "%s", p[a]);
        for(len=40-len; len>=0; len--){
            fprintf(fp, " ");
        }
        fprintf(fp, "%.1f\n", n[a]);
    }
    printf("Arquivo criado com sucesso");
    fclose(fp);
    for(a=0; a<i; a++){
        free(p[i]);
    }
    free(p);
    free(n);
    return 0;
}