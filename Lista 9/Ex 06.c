#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p, by, pos, op;
    pos=sizeof(int);
    do{
        printf("Insira quantos bytes serao alocados(sao aceitos apenas multiplos de %d): ", pos);
        scanf("%d", &by);
        if(by%pos!=0||by<0){
            printf("\nNao foi inserido um valor multiplo de %d, tente novamente:\n\n", pos);
        }
    }while(by%pos!=0||by<0);
    if((p=(int *)malloc(by))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    by/=pos;
    for(pos=0; pos<by; pos++){
        p[pos]=0;
    }
    while(1){
        do{
            printf("Insira uma opcao:\n1 - Inserir um valor em uma posicao\n2 - Ler o valor de uma posicao\n3 - Sair\n");
            scanf("%d", &op);
            if(op<1||op>3){
                printf("\nOpcao invalida, tente novamente:\n\n");
            }
        } while(op<1||op>3);
        if(op==1){
            printf("Insira a posicao que deve ser modificada: ");
            scanf("%d", &pos);
            while(pos<0||pos>=by){
                printf("Valor invalido, tente novamente: ");
                scanf("%d", &pos);
            }
            printf("Insira o valor que deve ser gravado nesse espaco de memoria: ");
            scanf("%d", &p[pos]);
        } else if(op==2){
            printf("Insira a posicao que deve ser lida: ");
            scanf("%d", &pos);
            while(pos<0||pos>=by){
                printf("Valor invalido, tente novamente: ");
                scanf("%d", &pos);
            }
            printf("Essa celula guarda o valor de %d\n", p[pos]);
        } else{
            break;
        }
    }
    free(p);
    return 0;
}