#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct pessoa{
    char nome[40];
    int d, m, a;
};

int main(){
    FILE *fp, *res;
    struct pessoa p;
    char end[500];
    int d, m, a, i;

    printf("Insira o endereco do arquivo: ");
    fgets(end, 500, stdin);
    end[strlen(end)-1]='\0';

    if((fp=fopen(end, "r"))==NULL){
        printf("O arquivo nao foi encontrado");
        exit(1);
    }
    if((res=fopen("idades.txt", "w"))==NULL){
        printf("Erro ao criar o arquivo");
        exit(1);
    }

    printf("Insira o dia de hoje(DD MM AAAA): ");
    scanf("%d%d%d", &d, &m, &a);

    while(1){
        fscanf(fp,"%s%d%d%d", p.nome, &p.d, &p.m, &p.a);
        if(feof(fp)){
            break;
        }
        i=a-p.a;
        if(p.m>m){ //Ainda não chegou no mes do aniversario
            i--;
        } else if(p.m==m){
            if(p.d>d){ //Ainda não chegou no dia do anoversario
                i--;
            }
        }
        fprintf(res,"%s, %d anos\n", p.nome, i);
    }
    printf("Arquivo criado com sucesso");
    fclose(fp);
    fclose(res);
    return 0;
}