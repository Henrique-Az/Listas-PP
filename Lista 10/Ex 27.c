#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct aluno{
    char nome[40];
    float n[3];
};

struct aluno *read(FILE *fp, int *l);
int opcao();
void inf(FILE *fp, struct aluno *a, int l);
struct aluno *ins(FILE *fp, struct aluno *a, int *l);
void printarq(struct aluno *a, int l);
void printapr(struct aluno *a, int l);
void printrep(struct aluno *a, int l);
void save(FILE *fp);

int main(){
    struct aluno *a;
    FILE *fp;
    int op=0, l=0;

    if((fp=fopen("notas.txt", "r+"))==NULL){
        if((fp=fopen("notas.txt", "w+"))==NULL){
            printf("Erro ao criar o arquivo");
            exit(1);
        }
    } else{
        a=read(fp, &l);
    }
    while(op!=7){
        op=opcao();
        if(op==1){
            inf(fp, a, l);
        } else if(op==2){
            a=ins(fp, a, &l);
        } else if(op==3){
            printarq(a, l);
        } else if(op==4){
            printapr(a, l);
        } else if(op==5){
            printrep(a, l);
        } else if(op==6){
            save(fp);
        }
    }
    free(a);
    return 0;
}

struct aluno *read(FILE *fp, int *l){
    struct aluno *a=NULL, buf;
    *l=0;
    char c;
    fseek(fp, 0, SEEK_SET);
    while((c=getc(fp))!='\n'&&c!=EOF); //Andando a descricao do começo do arquivo
    while(1){
        fscanf(fp, "%s - %f, %f, %f", buf.nome, &buf.n[0], &buf.n[1], &buf.n[2]);
        if(feof(fp)){
            break;
        }
        fseek(fp, 2, SEEK_CUR); //Andando o \n
        (*l)++;
        if((a=(struct aluno *)realloc(a, (*l)*sizeof(struct aluno)))==NULL){
            printf("Erro de alocacao");
            exit(1);
        }
        strcpy(a[(*l)-1].nome, buf.nome);
        a[(*l)-1].n[0]=buf.n[0];
        a[(*l)-1].n[1]=buf.n[1];
        a[(*l)-1].n[2]=buf.n[2];
    }
    return a;
}

int opcao(){
    int op;
    do{
        printf("Insira uma opcao:\n\n");
        printf("1- Definir informacoes da turma\n2- Inserir aluno\n3- Exibir os alunos e suas medias\n4- Exibir os aprovados\n5- Exibir os reprovados\n6- Salvar os dados\n7- Sair\n");
        scanf("%d", &op);
        if(op<1||op>7){
            printf("Nao foi inserido uma opcao valida, tente novamente\n\n");
        }
    } while(op<1||op>7);
    return op;
}

void inf(FILE *fp, struct aluno *a, int l){
    char des[300];
    int i;
    fclose(fp);
    if((fp=fopen("notas.txt", "w+"))==NULL){
        printf("Erro ao abrir o arquivo");
        exit(1);
    }
    printf("Insira a descricao da turma: ");
    setbuf(stdin, NULL);
    fgets(des, 300, stdin);
    fputs(des, fp);
    for(i=0; i<l; i++){
        fprintf(fp, "%s - %.1f, %.1f, %.1f\n", a[i].nome, a[i].n[0], a[i].n[1], a[i].n[2]);
    }

}

struct aluno *ins(FILE *fp, struct aluno *a, int *l){
    (*l)++;
    if((a=(struct aluno *)realloc(a, (*l)*sizeof(struct aluno)))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    printf("Insira o nome do aluno: ");
    setbuf(stdin, NULL);
    fgets(a[(*l)-1].nome, 40, stdin);
    a[(*l)-1].nome[strlen(a[(*l)-1].nome)-1]='\0';
    printf("Insira as suas tres notas: ");
    scanf("%f%f%f", &a[(*l)-1].n[0], &a[(*l)-1].n[1], &a[(*l)-1].n[2]);
    fseek(fp, 0, SEEK_END);
    fprintf(fp, "%s - %.1f, %.1f, %.1f\n", a[(*l)-1].nome, a[(*l)-1].n[0], a[(*l)-1].n[1], a[(*l)-1].n[2]);
    return a;
}

void printarq(struct aluno *a, int l){
    int i;
    float m;
    for(i=0; i<l; i++){
        m=(a[i].n[0]+a[i].n[1]+a[i].n[2])/3;
        printf("%s - %.1f\n", a[i].nome, m);
    }
}

void printapr(struct aluno *a, int l){
    int i;
    float m;
    for(i=0; i<l; i++){
        m=(a[i].n[0]+a[i].n[1]+a[i].n[2])/3;
        if(m>=6)
        printf("%s - %.1f\n", a[i].nome, m);
    }
}

void printrep(struct aluno *a, int l){
    int i;
    float m;
    for(i=0; i<l; i++){
        m=(a[i].n[0]+a[i].n[1]+a[i].n[2])/3;
        if(m<6)
        printf("%s - %.1f\n", a[i].nome, m);
    }
}

void save(FILE *fp){
    fclose(fp);
    if((fp=fopen("notas.txt", "r+"))==NULL){
        printf("Erro ao abrir o arquivo");
        exit(1);
    }
}
