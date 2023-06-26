#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char aux[30], c, end[500];
    int i;
    FILE *fp, *res;
    printf("Insira o endereco do arquivo de entrada: ");
    fgets(end, 500, stdin);
    end[strlen(end)-1]='\0';
    if((fp=fopen(end, "r"))==NULL){
        printf("Nao foi encontrado tal arquivo");
        exit(1);
    }
    printf("Insira o endereco do arquivo de saida: ");
    fgets(end, 500, stdin);
    end[strlen(end)-1]='\0';
    if((res=fopen(end, "w"))==NULL){
        printf("Endereco invalido");
        exit(1);
    }
    while(1){
        for(i=0; (c=getc(fp))!='\n'&&c!=EOF; i++){
            aux[i]=c;
        }
        for(i--; i>=0; i--){
            fputc(aux[i], res);
        }
        fputc('\n', res);
        if(feof(fp)){
            break;
        }
    }
    printf("Arquivo criado com sucesso");
    fclose(fp);
    fclose(res);
    return 0;
}