#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char end[500], c;
    int alf[26];
    FILE *fp;

    for(c=0; c<26; c++){ //Inicializando o alfabeto com 0's
        alf[c]=0;
    }

    printf("Insira o caminho relativo ou absoluto do arquivo: ");
    fgets(end, 500, stdin);
    end[strlen(end)-1]='\0';

    if((fp=fopen(end, "r"))==NULL){
        printf("O arquivo nao foi encontrado");
        exit(1);
    }
    while((c=getc(fp))!=EOF){
        if(c>='A'&&c<='Z'){
            alf[c-65]++; //converte valor ascii pra 0 a 25
        } else if(c>='a'&&c<='z'){
            alf[c-97]++;
        }
    }
    printf("Essa eh a quantidade de ocorrencias das letras do alfabeto no arquivo dado:\n\n");
    for(c=0; c<26; c++){
        printf("%c: %d\n", c+65, alf[c]);
    }
    fclose(fp);
    return 0;
}