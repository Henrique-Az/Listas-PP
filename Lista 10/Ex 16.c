#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void bin(char *n, int a){ //Transforma em binario em complemento de 2
    int i;
    n[32]='\0';
    if(a<0){
    for(i=0; i<32; i++){ //Inicializando o vetor com 1
        n[i]='1';
    }
    a*=-1;
    a--;
    for(i=31; a>0; i--){
        n[i]='1'-a%2;
        a/=2;
    }
    } else{
        for(i=0; i<32; i++){ //Inicializando o vetor zerado
        n[i]='0';
        }
        for(i=31; a>0; i--){
            n[i]='0'+a%2;
            a/=2;
        }
    }

}

int main(){
    int vet[10], i;
    char n[33]; //Um inteiro tem 4 bytes, ou 32 bits
    FILE *fp;

    if((fp=fopen("binario.txt", "w"))==NULL){
        printf("Nao foi possivel criar o arquivo");
        exit(1);
    }

    for(i=0; i<10; i++){
        printf("Insira o %d%c numero: ", i+1, 167);
        scanf("%d", &vet[i]);
        bin(n, vet[i]);
        fprintf(fp, "%s\n", n);
    }
    printf("Arquivo criado com sucesso");
    fclose(fp);
    return 0;

}