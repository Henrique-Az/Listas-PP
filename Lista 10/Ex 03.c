#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *p;
    char c, end[500];
    int i=0;

    printf("Insira o endereco do arquivo que deve ser aberto: ");
    fgets(end, 500, stdin);
    end[strlen(end)-1]='\0';

    if((p=fopen(end, "r"))==NULL){
        printf("O arquivo nao foi encontrado");
        exit(1);
    }
    while(1){
        if((c=fgetc(p))==EOF){
            break;
        } else{
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
                i++;
            }
        }
    }
    printf("O arquivo tem um total de %d vogais", i);
    fclose(p);
    return 0;
}