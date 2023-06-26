#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char end[500], palavra[50], c;
    int len, i, vezes=0;
    FILE *fp;
    printf("Insira o endereco do arquivo que deve ser usado: ");
    fgets(end, 500, stdin);
    end[strlen(end)-1]='\0';
    if((fp=fopen(end, "r"))==NULL){
        printf("O arquivo nao foi encontrado");
        exit(1);
    }
    printf("Insira a palavra que deve ser buscada: ");
    setbuf(stdin, NULL);
    fgets(palavra, 50, stdin);
    len=strlen(palavra)-1;
    palavra[len]='\0';
    while(1){
        for(i=0; i<len; i++){
            if((c=getc(fp))!=palavra[i]){
                if(feof(fp)){
                    break;
                }
                fseek(fp, (-1)*i, SEEK_CUR); //Anda 1 posicao a menos pra trás do que você andou pra frente
                break;
            }
        }
        if(i==len){
            vezes++;
        }
        if(feof(fp)){
            break;
        }
    }

    printf("\"%s\" aparece %d vezes", palavra, vezes);
    fclose(fp);
    return 0;
}