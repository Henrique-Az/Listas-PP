#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct agenda{
    char nome[40];
    int tel, d, m;
};

int opcao(){
    int op;
    do{
        printf("Insira uma opcao:\n\n");
        printf("1- Inserir contato\n2- Remover contato\n3- Pesquisar um nome\n4- Listar contatos\n5- Listar contatos com uma dada letra\n6- Imprimir os aniversariantes do mes\n7- Sair\n");
        scanf("%d", &op);
        if(op<1||op>7){
            printf("Opcao invalida, tente novamente:\n\n");
        }
    }while(op<1||op>7);
    return op;
}

void line_del(int l){
    FILE *fp, *aux;
    struct agenda r;
    int i=0;
    char c;
    if((fp=fopen("agenda.bin", "r"))==NULL){
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    if((aux=fopen("aux.bin", "w"))==NULL){
        printf("Erro na criacao do auxiliar");
        exit(1);
    }
    while(1){
        i++;
        if(i==l){
            while((c=getc(fp))!='\0');
            fseek(fp, 3*sizeof(int), SEEK_CUR);
        }
        while((c=getc(fp))!='\0'&&c!=EOF){
            fputc(c, aux);
        }
        if(c==EOF){
            break;
        }
        fputc(c, aux);
        fread(&r.tel, sizeof(int), 1, fp);
        fread(&r.d, sizeof(int), 1, fp);
        fread(&r.m, sizeof(int), 1, fp);
        fwrite(&r.tel, sizeof(int), 1, aux);
        fwrite(&r.d, sizeof(int), 1, aux);
        fwrite(&r.m, sizeof(int), 1, aux);
    }
    fclose(fp);
    fclose(aux);
    if((fp=fopen("agenda.bin", "w"))==NULL){
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    if((aux=fopen("aux.bin", "r"))==NULL){
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    while((c=fgetc(aux))!=EOF){
        fputc(c, fp);
    }
    fclose(aux);
    fclose(fp);
    remove("aux.bin");
}

int main(){
    FILE *fp;
    struct agenda a, arq;
    char c, letra;
    int op=0, linha, j;

    if((fp=fopen("agenda.bin", "r"))==NULL){
        if((fp=fopen("agenda.bin", "w"))==NULL){
            printf("Erro na criacao do arquivo");
            exit(1);
        }
        printf("O arquivo ainda esta vazio\n\n");
        fclose(fp);
    } else{
        if((c=getc(fp))==EOF){
            printf("O arquivo ainda esta vazio\n\n");
        } else{
            rewind(fp);
            while(1){
                while((c=getc(fp))!='\0'){
                    if(c==EOF){
                        break;
                    }
                    printf("%c", c);
                }
                if(c==EOF){
                    break;
                }
                fread(&a.tel, sizeof(int), 1, fp);
                fread(&a.d, sizeof(int), 1, fp);
                fread(&a.m, sizeof(int), 1, fp);
                printf(", %d, %d/%d\n", a.tel, a.d, a.m);
            }
        }
    }
    fclose(fp);
    while(op!=7){
        op=opcao();
        linha=0;
        if(op==1){
            if((fp=fopen("agenda.bin", "a"))==NULL){
                printf("Erro ao abrir o arquivo");
                exit(1);
            }
            printf("Insira o nome do contato: ");
            setbuf(stdin, NULL);
            fgets(a.nome, 40, stdin);
            a.nome[strlen(a.nome)-1]='\0';
            fwrite(a.nome, sizeof(char), strlen(a.nome)+1, fp);
            printf("Insira o seu telefone: ");
            scanf("%d", &a.tel);
            fwrite(&a.tel, sizeof(int), 1, fp);
            printf("Insira a sua data de aniversario: ");
            scanf("%d%d", &a.d, &a.m);
            fwrite(&a.d, sizeof(int), 1, fp);
            fwrite(&a.m, sizeof(int), 1, fp);
            fclose(fp);
        } else if(op==2){
            if((fp=fopen("agenda.bin", "r"))==NULL){
                printf("Erro na abertura do arquivo");
                exit(1);
            }
            printf("Insira o contato que deve ser removido: ");
            setbuf(stdin, NULL);
            fgets(a.nome, 40, stdin);
            a.nome[strlen(a.nome)-1]='\0';
            while(1){
                linha++;
                for(j=0; (c=getc(fp))!='\0'&&c!=EOF; j++){
                    arq.nome[j]=c;
                }
                arq.nome[j]=c;
                if((feof(fp))){
                    printf("O nome nao foi encontrado\n");
                    fclose(fp);
                    break;
                }
                for(j=0; arq.nome[j]!='\0'; j++){
                    if(arq.nome[j]!=a.nome[j]){
                        break;
                    }
                }
                if(arq.nome[j]=='\0'&&a.nome[j]=='\0'){
                    fclose(fp);
                    line_del(linha);
                    break;
                }
            }
        } else if(op==3){
            if((fp=fopen("agenda.bin", "r"))==NULL){
                printf("Erro na abertura do arquivo");
                exit(1);
            }
            printf("Insira o contado que deve ser buscado: ");
            setbuf(stdin, NULL);
            fgets(a.nome, 40, stdin);
            a.nome[strlen(a.nome)-1]='\0';
            while(1){
                for(j=0; (c=getc(fp))!='\0'&&c!=EOF; j++){
                    arq.nome[j]=c;
                }
                arq.nome[j]=c;
                if((feof(fp))){
                    printf("O nome nao foi encontrado\n");
                    break;
                    fclose(fp);
                }
                for(j=0; arq.nome[j]!='\0'; j++){
                    if(arq.nome[j]!=a.nome[j]){
                        break;
                    }
                }
                if(arq.nome[j]=='\0'&&a.nome[j]=='\0'){
                    fread(&a.tel, sizeof(int), 1, fp);
                    fread(&a.d, sizeof(int), 1, fp);
                    fread(&a.m, sizeof(int), 1, fp);
                    printf("%s - %d - %d/%d\n", a.nome, a.tel, a.d, a.m);
                    break;
                }
            }
            fclose(fp);
        } else if(op==4){
            if((fp=fopen("agenda.bin", "r"))==NULL){
                printf("Erro na abertura do arquivo");
                exit(1);
            }
            while(1){
                for(j=0; (c=getc(fp))!='\0'; j++){
                    if(c==EOF){
                        break;
                    }
                    a.nome[j]=c;
                }
                if(feof(fp)){
                    break;
                }
                a.nome[j]=c;
                fread(&a.tel, sizeof(int), 1, fp);
                fread(&a.d, sizeof(int), 1, fp);
                fread(&a.m, sizeof(int), 1, fp);
                printf("%s - %d - %d/%d\n", a.nome, a.tel, a.d, a.m);
            }
            fclose(fp);
        } else if(op==5){
            if((fp=fopen("agenda.bin", "r"))==NULL){
                printf("Erro na abertura do arquivo");
                exit(1);
            }
            linha=0; //Usando linha como um auxiliar
            printf("Insira a letra que deve ser buscada: ");
            setbuf(stdin, NULL);
            scanf("%c", &letra);
            while(1){
                if((c=getc(fp))==letra){
                    linha=1;
                    fseek(fp, -1, SEEK_CUR);
                    for(j=0; (c=getc(fp))!='\0'; j++){
                        a.nome[j]=c;
                    }
                    a.nome[j]=c;
                    fread(&a.tel, sizeof(int), 1, fp);
                    fread(&a.d, sizeof(int), 1, fp);
                    fread(&a.m, sizeof(int), 1, fp);
                    printf("%s - %d - %d/%d\n", a.nome, a.tel, a.d, a.m);
                } else{
                    if(feof(fp)){
                        if(!linha){
                            printf("Nao foi encontrado nenhum contato com essa letra\n");
                        }
                        break;
                    }
                    while((c=getc(fp))!='\0'){
                        if(feof(fp)){
                            break;
                        }
                    }
                    fseek(fp, 3*sizeof(int), SEEK_CUR);
                }
            }
            fclose(fp);
        } else if(op==6){
            if((fp=fopen("agenda.bin", "r"))==NULL){
                printf("Erro na abertura do arquivo");
                exit(1);
            }
            printf("Insira o mes de busca: ");
            scanf("%d", &a.m);
            linha=0; //usando linha como um auxiliar 
            while(1){
                for(j=0; (c=getc(fp))!='\0'&&c!=EOF; j++){
                    arq.nome[j]=c;
                }
                if(feof(fp)){
                    break;
                }
                arq.nome[j]=c;
                fread(&arq.tel, sizeof(int), 1, fp);
                fread(&arq.d, sizeof(int), 1, fp);
                fread(&arq.m, sizeof(int), 1, fp);
                if(a.m==arq.m){
                    linha=1;
                    printf("%s - %d - %d/%d\n", arq.nome, arq.tel, arq.d, arq.m);
                }
            }
            if(!linha){
                printf("Nao foi encontrado nenhum aniversariante\n");
            }
            fclose(fp);
        }
    }
    return 0;
}