#include<stdio.h>

struct dados{
    char nome[20], endereco[100];
    int idade;
};

typedef struct dados data;

int main(){
    data dados;
    printf("Insira o nome da pessoa: ");
    fgets(dados.nome, 20, stdin);
    printf("Insira a idade da pessoa: ");
    scanf("%d", &dados.idade);
    printf("Insira o endereco da pessoa: ");
    fflush(stdin);
    fgets(dados.endereco, 100, stdin);
    return 0;
}