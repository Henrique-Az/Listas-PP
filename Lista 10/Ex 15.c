#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct pessoa{
    char nome[40];
    int a;
};

int main(){
    FILE *fp, *res;
    struct pessoa p;
    char end[500];
    int a, i;

    printf("Insira o endereco do arquivo: ");
    fgets(end, 500, stdin);
    end[strlen(end)-1]='\0';

    if((fp=fopen(end, "r"))==NULL){
        printf("O arquivo nao foi encontrado");
        exit(1);
    }
    if((res=fopen("maioridade.txt", "w"))==NULL){
        printf("Erro ao criar o arquivo");
        exit(1);
    }

    printf("Insira o ano atual: ");
    scanf("%d", &a);

    while(1){
        fscanf(fp,"%s%d", p.nome, &p.a);
        if(feof(fp)){
            break;
        }
        i=a-p.a;
        fprintf(res, "%s, ", p.nome);
        if(i>18){
            fprintf(res, "maior de idade\n");
        } else if(i<18){
            fprintf(res, "menor de idade\n");
        } else{
            fprintf(res, "entrando na maior idade\n");
        }
    }
    printf("Arquivo criado com sucesso");
    fclose(fp);
    fclose(res);
    return 0;
}