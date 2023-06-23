#include<stdio.h>
#include<stdlib.h>

struct data{
    int d, m, a;
};

struct aluno{
    char mat[20], sob[20];
    struct data data;
};

int val_dia(int d, int m, int a){
    if(m<1||m>12){
        return 1;
    } else{
        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
            if(d<1||d>31){
                return 1;
            }
        } else if(m==2){
            if((a%400==0) || ((a%4==0) && (a%100!=0))){//checa se o ano é bissexto
                if(d<1||d>29){
                    return 1;
                }
            } else{
                if(d<1||d>28){
                    return 1;
                }
            }
        } else{
            if(d<1||d>30){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    struct aluno *p;
    int i, n;
    printf("Insira quantos alunos devem ser guardados: ");
    scanf("%d", &n);
    while(n<0){
        printf("Quantidade invalida, tente novamente: ");
        scanf("%d", &n);
    }
    if((p=(struct aluno *)malloc(n*sizeof(struct aluno)))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    for(i=0; i<n; i++){
        printf("Insira o sobrenome do %d%c aluno: ", i+1, 167);
        setbuf(stdin, NULL);
        fgets(p[i].sob, 20, stdin);
        printf("Insira a sua matricula: ");
        setbuf(stdin, NULL);
        fgets(p[i].mat, 20, stdin);
        do{
            printf("Insira a data de nascimento(DD/MM/AA): ");
            scanf("%d%d%d", &p[i].data.d, &p[i].data.m, &p[i].data.a);
            if(val_dia(((p+i)->data.d), (p+i)->data.m, (p+i)->data.a)){
                printf("Data invalida, tente novamente:\n\n");
            }
        } while(val_dia(((p+i)->data.d), (p+i)->data.m, (p+i)->data.a));
    }
    for(i=0; i<n; i++){
        printf("\n\nSobrenome: %sMatricula: %sData de nascimento: %d/%d/%d", (p+i)->sob, (p+i)->mat, (p+i)->data.d, (p+i)->data.m, (p+i)->data.a);
    }
    free(p);
    return 0;
}