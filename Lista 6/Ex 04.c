#include<stdio.h>
#include<string.h>

struct aluno{
    char matricula[20], nome[40];
    float nota[3];
};

void menu_printer(){
    printf("Insira uma opcao:\n");
    printf("1- Encontre o aluno com maior nota na primeira prova\n");
    printf("2- Encontre o aluno com maior media geral\n");
    printf("3- Encontre o aluno com menor media geral\n");
    printf("4- Veja se um aluno foi aprovado ou nao\n");
}

typedef struct aluno aluno;

int main(){
    aluno a[5];
    int i, j, op, aux=0;

    for(i=0; i<5; i++){
        printf("Insira a matricula do aluno %d: ", i+1);
        fflush(stdin);
        fgets(a[i].matricula, 30, stdin);
        printf("Insira o nome do aluno: ");
        fflush(stdin);
        fgets(a[i].nome, 30, stdin);
        for(j=0; j<3; j++){
            printf("Insira a nota da prova %d: ", j+1);
            scanf("%f", &a[i].nota[j]);
            if(a[i].nota[j]<0||a[i].nota[j]>10){
                printf("A nota inserida eh invalida, tente novamente:\n");
                j--;
            }
        }
    }
    do{
        menu_printer();
        scanf("%d", &op);
        if(op<1||op>4){
            printf("A opcao inserida eh invalida, tente novamente:\n\n");
        }
    }while(op<1||op>4);

    switch(op){
        case 1:
            for(i=1; i<5; i++){
                if(a[i].nota[0]>a[aux].nota[0]){
                    aux=i;
                }
            }
            printf("O aluno com maior nota foi %s", a[aux].nome);
            break;
        case 2:
            for(i=1; i<5; i++){
                if(a[i].nota[0]+a[i].nota[1]+a[i].nota[2]>a[aux].nota[0]+a[aux].nota[1]+a[aux].nota[2]){
                    aux=i;
                }
            }
            printf("O aluno com maior nota global foi %s", a[aux].nome);
            break;
        case 3:
            for(i=1; i<5; i++){
                if(a[i].nota[0]+a[i].nota[1]+a[i].nota[2]<a[aux].nota[0]+a[aux].nota[1]+a[aux].nota[2]){
                    aux=i;
                }
            }
            printf("O aluno com menor nota global foi %s", a[aux].nome);
            break;
        case 4:
            do{
                printf("Escolha um dos seguintes alunos:\n\n");
                printf("1 - %s2 - %s3 - %s4 - %s 5 - %s", a[0].nome, a[1].nome, a[2].nome, a[3].nome, a[4].nome);
                scanf("%d", &op);
                if(op<1||op>5){
                    printf("Opcao invalida, tente novamente:\n\n");
                }
            }while(op<1||op>4);
            if(a[op-1].nota[0]+a[op-1].nota[1]+a[op-1].nota[2]>=18){
                printf("O aluno foi aprovado");
            } else{
                printf("O aluno nao foi aprovado");
            }
    }
    return 0;
}