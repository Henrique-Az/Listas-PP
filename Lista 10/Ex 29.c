#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct venda{
    char nome_vendedor[40];
    float valor_da_venda;
    int mes, codigo_vendedor;
};

struct venda *read(int *l);
int opcao();
void criar();
struct venda *ins(struct venda *a, int *l);
void sort(struct venda *a, int l);
struct venda *exc(struct venda *a, int *l);
void alt(struct venda *a, int l);
void printarq(struct venda *a, int l);
void del();

int main(){
    struct venda *a=NULL;
    FILE *fp;
    int op=0, l=0;

    if((fp=fopen("vendas.txt", "r+"))==NULL){
        printf("Ainda nao foi criado um arquivo!\n\n");
    } else{
        a=read(&l);
    }
    fclose(fp);
    while(op!=7){
        op=opcao();
        if(op==1){
            criar();
        } else if(op==2){
            a=ins(a, &l);
        } else if(op==3){
            exc(a, &l);
        } else if(op==4){
            alt(a, l);
        } else if(op==5){
            printarq(a, l);
        } else if(op==6){
            del();
        }
    }
    free(a);
    return 0;
}

struct venda *read(int *l){
    FILE *fp;
    struct venda *a=NULL, buf;
    *l=0;
    if((fp=fopen("vendas.txt", "r"))==NULL){
        printf("Erro ao abrir o arquivo");
        exit(1);
    }
    while(1){
        fscanf(fp, "%d - %s - %f - %d", &buf.codigo_vendedor, buf.nome_vendedor, &buf.valor_da_venda, &buf.mes);
        if(feof(fp)){
            break;
        }
        fseek(fp, 2, SEEK_CUR); //Andando o \n
        (*l)++;
        if((a=(struct venda *)realloc(a, (*l)*sizeof(struct venda)))==NULL){
            printf("Erro de alocacao");
            exit(1);
        }
        a[(*l)-1].codigo_vendedor=buf.codigo_vendedor;
        strcpy(a[(*l)-1].nome_vendedor, buf.nome_vendedor);
        a[(*l)-1].valor_da_venda=buf.valor_da_venda;
        a[(*l)-1].mes=buf.mes;
    }
    fclose(fp);
    return a;
}

int opcao(){
    int op;
    do{
        printf("Insira uma opcao:\n\n");
        printf("1- Criar o arquivo de dados\n2- Incluir registro\n3- Excluir um vendedor\n4- ALterar um valor de venda\n5- Imprimir os registro\n6- Excluir os arquivos\n7- Sair\n");
        scanf("%d", &op);
        if(op<1||op>7){
            printf("Nao foi inserido uma opcao valida, tente novamente\n\n");
        }
    } while(op<1||op>7);
    return op;
}

void criar(){
    FILE *fp;
    if((fp=fopen("vendas.txt", "w"))==NULL){
        printf("Erro na criacao do arquivo");
        exit(1);
    }
    fclose(fp);
}

struct venda *ins(struct venda *a, int *l){
    FILE *fp;
    int i;
    (*l)++;
    if((a=(struct venda *)realloc(a, (*l)*sizeof(struct venda)))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    printf("Insira o codigo do vendedor: ");
    scanf("%d", &a[(*l)-1].codigo_vendedor);
    printf("Insira o nome do vendedor: ");
    setbuf(stdin, NULL);
    fgets(a[(*l)-1].nome_vendedor, 40, stdin);
    a[(*l)-1].nome_vendedor[strlen(a[(*l)-1].nome_vendedor)-1]='\0';
    printf("Insira o valor de venda: ");
    scanf("%f", &a[(*l)-1].valor_da_venda);
    printf("Insira o mes da venda: ");
    scanf("%d", &a[(*l)-1].mes);
    sort(a, *l);
    if((fp=fopen("vendas.txt", "w"))==NULL){
        printf("Erro ao abrir o arquivo");
        exit(1);
    }
    for(i=0; i<(*l); i++){
        fprintf(fp, "%d - %s - %.2f - %d\n", a[i].codigo_vendedor, a[i].nome_vendedor, a[i].valor_da_venda, a[i].mes);
    }
    fclose(fp);
    return a;
}

void sort(struct venda *a, int l){
    struct venda aux;
    int i;
    for(i=l-1; i>0; i--){
        if(a[i].codigo_vendedor<a[i-1].codigo_vendedor){
            aux=a[i-1];
            a[i-1]=a[i];
            a[i]=aux;
        } else if(a[i].codigo_vendedor==a[i-1].codigo_vendedor){
            if(a[i].mes<a[i-1].mes){
                aux=a[i-1];
                a[i-1]=a[i];
                a[i]=aux;
            }
        }
    }
}

struct venda *exc(struct venda *a, int *l){
    int i;
    printf("Insira a linha que deve ser excluida: ");
    scanf("%d", &i);
    while(i<1||i>*l){
        printf("Essa linha nao existe, tente novamente: ");
        scanf("%d", &i);
    }
    for(; i<*l; i++){
        a[i-1]=a[i];
    }
    (*l)--;
    if((a=(struct venda *)realloc(a, (*l)*sizeof(struct venda)))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    return a;
}

void alt(struct venda *a, int l){
    FILE *fp;
    int i;
    float v;
    printf("Insira a linha do registro que deve ser mudada: ");
    scanf("%d", &i);
    while(i<1||i>l){
        printf("Essa linha nao existe, tente novamente: ");
        scanf("%d", &i);
    }
    printf("Insira qual o valor de venda desejado: ");
    scanf("%f", &v);
    a[i-1].valor_da_venda=v;
    if((fp=fopen("vendas.txt", "w"))==NULL){
        for(i=0; i<l; i++){
            fprintf(fp, "%d - %s - %.2f - %d\n", a[i].codigo_vendedor, a[i].nome_vendedor, a[i].valor_da_venda, a[i].mes);
        }
    }
    fclose(fp);
}

void printarq(struct venda *a, int l){
    int i;
    for(i=0; i<l; i++){
        printf("%d - %s - %.2f - %d\n", a[i].codigo_vendedor, a[i].nome_vendedor, a[i].valor_da_venda, a[i].mes);
    }
}

void del(){
    remove("vendas.txt");
}
