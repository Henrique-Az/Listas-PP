#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char nome[30];
    unsigned int tel=1, i=0;
    FILE *fp;
    if((fp=fopen("lista telefone.txt", "w"))==NULL){
        printf("Erro ao criar o arquivo");
        exit(1);
    }
    while(tel){
        i++;
        printf("Insira o %d%c nome: ", i, 167);
        setbuf(stdin, NULL);
        fgets(nome, 30, stdin);
        nome[strlen(nome)-1]='\0';
        printf("Insira o respectivo telefone(Insira 0 para sair): ");
        scanf("%d", &tel);
        if(tel){
            fprintf(fp, "%s - %d\n", nome, tel);
        }
    }
    printf("Arquivo criado com sucesso");
    fclose(fp);
    return 0;
}