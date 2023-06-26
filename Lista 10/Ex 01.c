#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    char c='a';
    if((fp=fopen("arq.txt", "r+"))==NULL){
        if((fp=fopen("arq.txt", "w+"))==NULL){
            printf("Erro na abertura do arquivo");
            exit(1);
        }
    }
    fseek(fp, 0, SEEK_END);
    while(c!='0'){
        printf("Insira o caractere que deve ser gravado(Insira 0 para sair): ");
        setbuf(stdin, NULL);
        scanf("%c", &c);
        if(c!='0')
        fputc(c, fp);
    }
    rewind(fp);
    while((c=fgetc(fp))!=EOF){
        printf("%c", c);
    }
    fclose(fp);
    return 0;
}