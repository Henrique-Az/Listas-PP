#include<stdio.h>
#include<stdlib.h>

void printmenu(){
    printf("0 - Sair\n");
    printf("1 - Gravar um nome\n");
    printf("2 - Apagar uma linha\n");
    printf("3 - Substituir um nome\n");
    printf("4 - Apagar um nome\n");
    printf("5 - Ler o nome de uma linha\n");
}

int iguais(char *a, char *b){
    int i;
    for(i=0; a[i]!='\0'; i++){
        if(a[i]!=b[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char **p=NULL, busca[30];
    int op, tam=0, l;
    do{
        printmenu();
        scanf("%d", &op);
        while(op<0||op>5){
            printf("Opcao invalida, tente novamente:\n\n");
            printmenu();
            scanf("%d", &op);
        }
        system("cls");
        if(op==1){
            tam++;
            if((p=(char **)realloc(p,tam*sizeof(void *)))==NULL){
                printf("Erro de alocacao");
                exit(1);
            }
            if((p[tam-1]=(char *)malloc(30*sizeof(char)))==NULL){
                printf("Erro de alocacao");
                exit(1);
            }
            printf("Insira o nome que deve ser guardado: ");
            setbuf(stdin, NULL);
            fgets(p[tam-1], 30, stdin);
        } else if(op==2){
            printf("Qual linha deve ser apagada? ");
            scanf("%d", &l);
            while(l<1||l>tam){
                printf("Essa linha nao existe, tente novamente: ");
                scanf("%d", &l);
            }
            for(;l<tam; l++){
                p[l-1]=p[l];
            }
            free(p[l]);
            tam--;
        } else if(op==3){
            printf("Insira o nome que deve ser substituido: ");
            setbuf(stdin, NULL);
            fgets(busca, 30, stdin);
            for(l=0; l<tam; l++){
                if(iguais(busca, p[l])){
                    printf("Insira o nome que deve ser escrito no lugar: ");
                    setbuf(stdin, NULL);
                    fgets(p[l], 30, stdin);
                    break;
                }
            }
            if(l==tam){
                printf("O nome inserido nao esta na lista");
            }
        } else if(op==4){
            printf("Insira o nome que deve ser apagado: ");
            setbuf(stdin, NULL);
            fgets(busca, 30, stdin);
            for(l=0; l<tam; l++){
                if(iguais(busca, p[l])){
                    for(; l<tam-1; l++){
                        p[l]=p[l+1];
                    }
                    tam--;
                    free(p[l+1]);
                    break;
                }
            }
            if(l==tam){
                printf("O nome nao esta na lista");
            }
        } else if(op==5){
            printf("Insira a linha que deve ser lida: ");
            scanf("%d", &l);
            while(l<=0||l>tam){
                printf("Essa linha nao existe, tente novamente: ");
                scanf("%d", &l);
            }
            printf("%s", p[l-1]);
        }
        printf("\n\n");
    } while(op!=0);
    for(l=0; l<tam; l++){
        free(p[l]);
    }
    free(p);
    return 0;
}