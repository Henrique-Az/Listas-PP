#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *fp;
    float maior, nota;
    char nome[30], maior_nome[30], end[500];

    printf("Insira o endereco do arquivo: ");
    fgets(end, 500, stdin);
    end[strlen(end)-1]='\0';
    if((fp=fopen(end, "r"))==NULL){
        printf("O arquivo nao foi encontrado");
        exit(1);
    }
    fscanf(fp, "%s%f", maior_nome, &maior);
    while(1){
        fscanf(fp, "%s%f", nome, &nota);
        if(feof(fp)){
            break;
        }
        if(nota>maior){
            maior=nota;
            strcpy(maior_nome, nome);
        }
    }
    printf("O(a) aluno(a) %s tem a maior nota de %.1f pontos", maior_nome, maior);
    fclose(fp);
    return 0;
}