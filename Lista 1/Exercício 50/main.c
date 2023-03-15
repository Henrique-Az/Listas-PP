#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    char resposta;
    int ano;

    printf("Essa pessoa ja fez aniversario esse ano?(Y/N)\n");
    resposta=getchar();
    printf("Em que ano estamos?\n");
    scanf("%d", &ano);
    printf("Quantos anos a pessoa tem?\n");
    scanf("%d", &idade);
    if(resposta==78)
        idade=idade+1;
    printf("Essa pessoa nasceu no ano %d", ano-idade);
    return 0;
}
