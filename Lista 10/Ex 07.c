#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char end[500], c;
    FILE *fp, *f1;

    printf("Insira o endereco absoluto ou relativo do arquivo: ");
    fgets(end, 500, stdin);
    end[strlen(end)-1]='\0';

    if((fp=fopen(end, "r"))==NULL){
        printf("O arquivo nao foi encontrado");
        exit(1);
    }

    if((f1=fopen("output.txt", "w"))==NULL){
        printf("Erro ao criar o novo arquivo");
        exit(1);
    }

    while(1){
        if((c=fgetc(fp))==EOF){
            break;
        }
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
            fputc('*', f1);
        } else{
            fputc(c, f1);
        }
    }
    printf("Arquivo convertido com sucesso");
    fclose(fp);
    fclose(f1);
    return 0;
}