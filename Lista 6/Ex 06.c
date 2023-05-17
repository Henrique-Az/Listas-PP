#include<stdio.h>
#include<string.h>

struct aluno{
    char matricula[20], nome[40], codigo[10];
    float n1, n2;
};
typedef struct aluno aluno;
int main(){
    aluno a[10];
    int i;
    for(i=0; i<10; i++){
        printf("Insira a matricula do aluno %d: ", i+1);
        fflush(stdin);
        fgets(a[i].matricula, 20, stdin);
        printf("Insira o nome do aluno: ");
        fflush(stdin);
        fgets(a[i].nome, 40, stdin);
        printf("Insira a disciplina do aluno: ");
        fflush(stdin);
        fgets(a[i].codigo, 10, stdin);
        printf("Insira a primeira nota do aluno: ");
        scanf("%f", &a[i].n1);
        printf("Insira a segunda nota do aluno: ");
        scanf("%f", &a[i].n2);
        printf("\n\n");
    }
    for(i=0; i<10; i++){
        printf("%s", a[i].matricula);
        printf("%s", a[i].nome);
        printf("%s", a[i].codigo);
        printf("Nota final: %.1f", (a[i].n1+2*a[i].n2)/3);
        printf("\n");
    }

}