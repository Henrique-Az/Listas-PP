#include<stdio.h>
#include<string.h>

struct aluno{
    char nome[40], matricula[20], curso[40];
};
typedef struct aluno aluno;
int main(){
    aluno a[5];
    int i;
    for(i=0; i<5; i++){
        printf("Insira o nome do aluno %d: ", i+1);
        fflush(stdin);
        fgets(a[i].nome, 40, stdin);
        a[i].nome[strlen(a[i].nome)-1]='\0'; //Manualmente sobrescrevendo o \n que o fgets coloca
        printf("Insira o seu respectivo numero de matricula: ");
        fflush(stdin);
        fgets(a[i].matricula, 20, stdin);
        a[i].matricula[strlen(a[i].matricula)-1]='\0';
        printf("Insira o curso do aluno: ");
        fflush(stdin);
        fgets(a[i].curso, 40, stdin); //Posso manter o \n do curso, pois pretendo saltar uma linha no printf
        printf("\n");
    }
    for(i=0; i<5; i++){
        printf("%s - %s - %s", a[i].nome, a[i].matricula, a[i].curso);
    }
    return 0;
}