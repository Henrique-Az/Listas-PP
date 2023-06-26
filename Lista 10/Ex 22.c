#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char end[500], nome[41];
    FILE *ent, *sai;
    float n[3], aux;

    printf("Insira o endereco do arquivo de entrada: ");
    fgets(end, 500, stdin);
    end[strlen(end)-1]='\0';
    if((ent=fopen(end, "r"))==NULL){
        printf("O arquivo nao foi encontrado");
        exit(1);
    }
    printf("Insira o endereco do arquivo de saida: ");
    fgets(end, 500, stdin);
    end[strlen(end)-1]='\0';
    if((sai=fopen(end, "w"))==NULL){
        printf("Nao foi possivel criar o arquivo");
        exit(1);
    }
    while(1){
        fscanf(ent, "%40[^,], %f, %f, %f", nome, &n[0], &n[1], &n[2]);
        if(n[1]>n[0]){
            aux=n[0];
            n[0]=n[1];
            n[1]=aux;
        }
        if(n[2]>n[1]){
            aux=n[1];
            n[1]=n[2];
            n[2]=aux;
            if(n[1]>n[0]){
                aux=n[0];
                n[0]=n[1];
                n[1]=aux;
            }
        }
        fprintf(sai, "%s, %.1f, %.1f, %.1f\n", nome, n[0], n[1], n[2]);
        if(feof(ent)){
            break;
        }
    }
    printf("Arquivo criado com sucesso");
    fclose(ent);
    fclose(sai);
    return 0;
}