#include<stdio.h>
#include<string.h>

struct ele{
    char nome[17];
    float pot, tem;
};

int main(){
    struct ele e[5];
    int i;
    float t, tot=0, aux;

    for(i=0; i<5; i++){
        printf("Insira o nome do eletrodomestico %d: ", i+1);
        setbuf(stdin, NULL);
        fgets(e[i].nome, 17, stdin);
        e[i].nome[strlen(e[i].nome)-1]='\0';
        do{
            printf("Insira a potencia do dispositivo: ");
            scanf("%f", &e[i].pot);
            if(e[i].pot<=0){
                printf("Potencia invalida, tente novamente:\n\n");
            }
        }while(e[i].pot<=0);
        do{
            printf("Insira o tempo ativo por dia do eletrodomestico: ");
            scanf("%f", &e[i].tem);
            if(e[i].tem<0){
                printf("Tempo invalido, tente novamente:\n\n");
            }
        }while(e[i].tem<0);
    }
    do{
        printf("Insira uma quantidade de dias: ");
        scanf("%f", &t);
        if(t<0){
            printf("Tempo invalido, tente novamente:\n\n");
        }
    }while(t<0);
    for(i=0; i<5; i++){
        tot+=e[i].pot*e[i].tem*t;
    }
    printf("Os consumos de energia sao: ");
    for(i=0; i<5; i++){
        aux=e[i].pot*e[i].tem*t;
        printf("%s %.2fkWh, %.1f%%\n", e[i].nome, aux, 100*aux/tot);
    }
    return 0;
}