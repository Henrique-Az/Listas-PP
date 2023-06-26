#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char end[500], nome[40], c;
    int linha, maior, i=1, aux;
    FILE *fp;

    //Formato do arquivo usado: string(com \0 no final)(espaço)inteiro\n

    printf("Insira o endereco relatico ou absoluto do arquivo com as cidades: ");
    fgets(end, 500, stdin);
    end[strlen(end)-1]='\0';
    if((fp=fopen(end, "r"))==NULL){
        printf("Arquivo nao encontrado");
        exit(1);
    }
    while((c=fgetc(fp))!='\0'&&c!=EOF); //Move o cursor ate a parte dos inteiros
    if(c==EOF){
        printf("O arquivo nao contem uma cidade");
    } else{
        fscanf(fp, "%d", &aux);
        maior=aux;
        while(1){
            while((c=fgetc(fp))!='\0'&&c!=EOF);
            if(feof(fp)){
                break;
            }
            i++;
            fscanf(fp, "%d", &aux);
            if(aux>maior){
                maior=aux;
                linha=i;
            }
        }
    }
    fseek(fp, 0, SEEK_SET);
    for(i=1; i<linha; i++){
        while((c=getc(fp))!='\n');
    }
    fscanf(fp, "%s", nome);
    printf("A cidade com a maior populacao eh %s, com %d habitantes", nome, maior);
    fclose(fp);
    return 0;
}