#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char end[500], c;
    FILE *f1, *f2, *f3;

    printf("Insira o endereco absoluto ou relativo do primeiro arquivo: ");
    fgets(end, 500, stdin);
    end[strlen(end)-1]='\0';
    if((f1=fopen(end, "r"))==NULL){
        printf("Nao foi encontrado este arquivo");
        exit(1);
    }
    printf("Insira o endereco absoluto ou relativo do segundo arquivo: ");
    fgets(end, 500, stdin);
    end[strlen(end)-1]='\0';
    if((f2=fopen(end, "r"))==NULL){
        printf("Nao foi encontrado este arquivo");
        exit(1);
    }
    printf("Insira o nome do arquivo que deve ser criado(voce pode especificar o seu endereco): ");
    fgets(end, 500, stdin);
    end[strlen(end)-1]='\0';
    if((f3=fopen(end, "w"))==NULL){
        printf("Nome ou endereco invalido");
        exit(1);
    }
    while((c=fgetc(f1))!=EOF){
        fputc(c, f3);
    }
    while((c=fgetc(f2))!=EOF){
        fputc(c, f3);
    }
    printf("Arquivo criado com sucesso");
    fclose(f1);
    fclose(f2);
    fclose(f3);
    return 0;
}