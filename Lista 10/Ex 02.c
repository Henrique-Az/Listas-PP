#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char buffer[150], c;
    int i=1;
    FILE *fp;
    printf("Insira o endereco do arquivo(txt) que deve ser aberto: ");
    fgets(buffer, 150, stdin);
    buffer[strlen(buffer)-1]='\0';//Sobreescrevendo o \n
    if((fp=fopen(buffer, "r"))==NULL){
        printf("Nao foi achado o arquivo");
        exit(1);
    }
    while((c=fgetc(fp))!=EOF){
        if(c=='\n'){
            i++;
        }
    }
    printf("O arquivo tem %d linhas", i);
    fclose(fp);
    return 0;
}