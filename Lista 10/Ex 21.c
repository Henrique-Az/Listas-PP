#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct aluno{
    char nome[41];
    float n;
};

int main(){
    struct aluno *p;
    FILE *fp;
    int a, i;
    char nome[40];
    float n;

    if((fp=fopen("aluno.bin", "wb"))==NULL){
        printf("Nao foi possivel abrir o arquivo");
        exit(1);
    }
    printf("Insira quantos alunos quarem ser registrados: ");
    scanf("%d", &a);

    if((p=(struct aluno *)malloc(a*sizeof(struct aluno)))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    for(i=0; i<a; i++){
        printf("Insira o nome do %d%c aluno: ", i+1, 167);
        setbuf(stdin, NULL);
        fgets(p[i].nome, 41, stdin);
        p[i].nome[strlen(p[i].nome)-1]='\0';
        fwrite(p[i].nome, sizeof(char), 40, fp);
        printf("Insira a nota desse aluno: ");
        scanf("%f", &p[i].n);
        fwrite(&p[i].n, sizeof(float), 1, fp);
    }
    fclose(fp);
    if((fp=fopen("aluno.bin", "rb"))==NULL){
        printf("Erro ao abrir o arquivo");
        exit(1);
    }
    printf("Os dados registrados foram:\n\n");
    while(1){
        fread(nome, sizeof(char), 40, fp);
        if(feof(fp)){
            break;
        }
        fread(&n, sizeof(float), 1, fp);
        printf("%s, %.1f\n", nome, n);
    }
    free(p);
    fclose(fp);
    return 0;
}