#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    char end[500], dest[500], c;
    FILE *f1, *f2;

    printf("Insira o endereco absoluto ou relativo do arquivo que deve ser lido: ");
    fgets(end, 500, stdin);
    end[strlen(end)-1]='\0';
    if((f1=fopen(end, "r"))==NULL){
        printf("Nao foi encontrado este arquivo");
        exit(1);
    }
    printf("Insira o nome do arquivo que sera criado(voce pode especificar em que endereco ele sera criado): ");
    fgets(dest, 500, stdin);
    dest[strlen(dest)-1]='\0';
    if((f2=fopen(dest, "w"))==NULL){
        printf("Nome ou endereco invalido para o arquivo");
        exit(1);
    }
    while((c=fgetc(f1))!=EOF){
        c=toupper(c);
        fputc(c, f2);
    }
    printf("Arquivo criado com sucesso");
    fclose(f1);
    fclose(f2);
    return 0;
}