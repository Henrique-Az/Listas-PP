#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int car(FILE *fp){
    int i;
    char c;
    fseek(fp, 0, SEEK_SET);
    for(i=1; (c=getc(fp))!=EOF; i++);
    return i;
}

int lin(FILE *fp){
    int i=1;
    char c;
    fseek(fp, 0, SEEK_SET);
    while((c=getc(fp))!=EOF){
        if(c=='\n') i++;
    }
    return i;
}

int pal(FILE *fp){
    int i=1;
    char c;
    fseek(fp, 0, SEEK_SET);
    while((c=getc(fp))!=EOF){
        if(c=='\n'||c==' '||c==9){ //condicoes para separar uma palavra da outra
            c=getc(fp);
            fseek(fp, -1, SEEK_CUR);
            if(c!='\n'&&c!=' '&&c!=9&&c!=EOF){ //Se a proxima nao foi outra separacao
                i++;
            }
        }
    }
    return i;
}

int main(){
    char end[500];
    FILE *fp;

    printf("Insira o endereco do arquivo: ");
    fgets(end, 500, stdin);
    end[strlen(end)-1]='\0';

    if((fp=fopen(end, "r"))==NULL){
        printf("O arquivo nao foi encontrado");
        exit(1);
    }
    printf("A quantidade de caracteres do arquivo eh %d, a quantidade de linhas eh %d e a quantidade de palavras eh %d", car(fp), lin(fp), pal(fp));
    fclose(fp);
    return 0;
}