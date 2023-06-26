#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *fp;
    char c, b, end[500];
    int i=0;

    printf("Insira o endereco absoluto ou relativo do arquivo: ");
    fgets(end, 500, stdin);
    end[strlen(end)-1]='\0';

    if((fp=fopen(end, "r"))==NULL){
        printf("O arquivo nao foi encontrado");
        exit(1);
    }

    printf("Insira o caractere que deve ser buscado: ");
    scanf("%c",&b);

    while(1){
        if((c=getc(fp))==EOF){
            break;
        }
        if(c==b){
            i++;
        }
    }
    printf("O caratecere aparece um total de %d vezes", i);
    fclose(fp);
    return 0;
}