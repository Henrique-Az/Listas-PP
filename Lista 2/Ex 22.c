#include<stdio.h>

int main(){
    int idade, serv;
    printf("Insira a idade do trabalhador:\n");
    scanf("%d", &idade);
    printf("Insira o tempo de servico do trabalhador(em anos):\n");
    scanf("%d", &serv);

    if((idade>=65) || (serv>=30) || ((idade>=60) && (serv>=25))){
        printf("Esse trabalhador pode aposentar");
    }
    else{
        printf("Esse trabalhador nao pode aposentar");
    }
    return 0;
}