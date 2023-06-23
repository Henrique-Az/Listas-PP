#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct prod{
    int q, c;
    char nome[50];
    float p;
};

int main(){
    struct prod *p;
    int i, n, mp, mq;

    printf("Insira quantos produtos querem ser registrados: ");
    scanf("%d", &n);
    while(n<0){
        printf("Quantidade invalida, tente novamente: ");
        scanf("%d", &n);
    }
    if((p=(struct prod *)malloc(n*sizeof(struct prod)))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    for(i=0; i<n; i++){
        printf("Insira o nome do %d%c produto: ", i+1, 167);
        setbuf(stdin, NULL);
        fgets(p[i].nome, 50, stdin);
        p[i].nome[strlen(p[i].nome)-1]='\0';
        printf("Insira o codigo de produto do item: ");
        scanf("%d", &p[i].c);
        printf("Insira quantos itens desse estao disponiveis em estoque: ");
        scanf("%d", &p[i].q);
        printf("Insira o preco de venda do produto: ");
        scanf("%f", &p[i].p);
    }
    for(i=1, mp=0, mq=0; i<n; i++){
        if(p[i].p>p[mp].p){
            mp=i;
        }
        if(p[i].q>p[mq].q){
            mq=i;
        }
    }
    printf("O produto com maior preco eh %s (%.2f reais)", p[mp].nome, p[mp].p);
    printf("\nO produto com maior quantidade no estoque eh %s (%d quantidades)", p[mq].nome, p[mq].q);
    return 0;
}