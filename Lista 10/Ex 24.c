#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct merc{
    int cod, q;
    char desc[300];
};

int menu(){
    int op;
    do{
        printf("Insira uma opcao:\n\n1-Entrada de produto\n2-Retirada de produto\n3-Sair\n");
        scanf("%d", &op);
        if(op<1||op>3){
            printf("Opcao invalida, tente novamente:\n\n");
        }
    } while(op<1||op>3);
    return op;
}


void arqupdate(int op){
    FILE *fp;
    struct merc m, r;
    char c;
    if((fp=fopen("despensa.txt", "r+"))==NULL){
        if((fp=fopen("despensa.txt", "w+"))==NULL){
            printf("Erro na abertura do arquivo");
            exit(1);
        }
    }
    if(op==1){
        printf("Insira o codigo do produto que esta sendo inserido: ");
        scanf("%d", &m.cod);
        while(1){
            fread(&r.cod, sizeof(int), 1, fp);
            if(r.cod==m.cod){
                while((c=getc(fp))!='\0');
                fread(&r.q, sizeof(int), 1, fp);
                printf("Insira a quantidade que deve ser adicionada ao registro(existem %d unidades registradas): ", r.q);
                scanf("%d", &m.q);
                r.q+=m.q;
                fseek(fp, (-1)*sizeof(int), SEEK_CUR);
                fwrite(&r.q, sizeof(int), 1, fp);
                break;
            } else if(feof(fp)){
                printf("Um novo codigo foi identificado, insira a descricao desse produto: ");
                setbuf(stdin, NULL);
                fgets(m.desc, 300, stdin);
                m.desc[strlen(m.desc)-1]='\0';
                printf("Insira a quantidade desse produto: ");
                scanf("%d", &m.q);
                fwrite(&m.cod, sizeof(int), 1, fp);
                fwrite(m.desc, sizeof(char), strlen(m.desc), fp);
                fputc('\0', fp);
                fwrite(&m.q, sizeof(int), 1, fp);
                break;
            }
            while((c=getc(fp))!='\0');
            fread(&r.q, sizeof(int), 1, fp);
        }
    } else{
        printf("Insira o codigo do produto que esta sendo retirado: ");
        scanf("%d", &m.cod);
        while(1){
            fread(&r.cod, sizeof(int), 1, fp);
            if(r.cod==m.cod){
                while((c=getc(fp))!='\0');
                fread(&r.q, sizeof(int), 1, fp);
                printf("Insira a quantidade que deve ser retirada do registro(existem %d unidades registradas): ", r.q);
                scanf("%d", &m.q);
                while(m.q>r.q){
                    printf("Nao existem tantas unidades assim para remover, tente novamente: ");
                    scanf("%d", &m.q);
                }
                r.q-=m.q;
                fseek(fp, (-1)*sizeof(int), SEEK_CUR);
                fwrite(&r.q, sizeof(int), 1, fp);
                break;
            }
            if(feof(fp)){
                printf("Esse codigo nao esta registrado\n\n");
                break;
            }
            while((c=getc(fp))!='\0');
            fread(&r.q, sizeof(int), 1, fp);
        }
    }
    fclose(fp);
}

int main(){
    int op=1, aux;
    struct merc m;
    FILE *fp;
    char c;
    while(op!=3){
        op=menu();
        if(op!=3){
            arqupdate(op);
        }
    }
    if((fp=fopen("despensa.txt", "r"))==NULL){
        printf("Nao ha um registro para ser lido");
        exit(1);
    }
    op=1; //Usando op como um auxiliar para ver se eu achei pelo menos um produto que esta indisponivel
    while(1){
        fread(&m.cod, sizeof(int), 1, fp);
        if(feof(fp)){
            break;
        }
        aux=1;
        while((c=getc(fp))!='\0'){
            aux++;
        }
        fseek(fp, -aux, SEEK_CUR);
        fgets(m.desc, aux, fp);
        fread(&m.q, sizeof(int), 1, fp);
        if(m.q==0){
            if(op){
                printf("Estes produtos estao indisponiveis:\n\n");
                op=0;
            }
            printf("%d - %s", m.cod, m.desc);
        }
    }
    if(op){
        printf("Nao ha produtos indisponiveis");
    }
    fclose(fp);
    return 0;
}