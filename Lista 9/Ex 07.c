#include<stdio.h>
#include<stdlib.h>

int correto(int *l, int b){
    int i;
    for(i=0; i<6; i++){
        if(b==l[i]){
            return 1;
        }
    }
    return 0;
}

int main(){
    int l[6], b[6], *corr, q=0, i, aux=0, aux1;
    for(i=0; i<6; i++){
        printf("Insira o %d%c valor da loteria: ", i+1, 167);
        scanf("%d", l+i);
    }
    for(i=0; i<6; i++){
        printf("Insira o %d%c valor do bilhete: ", i+1, 167);
        scanf("%d", b+i);
    }
    for(i=0; i<6; i++){
        if(correto(l, b[i])){
            q++;
            aux++;
        }
        aux*=10; //Aux irá guardar, em forma de 0 e 1, que posição é uma correspondência
    }
    aux/=10;//Compensa o fato de que a última execução não deve acresentar uma casa extra
    if((corr=(int *)malloc(q*sizeof(int)))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    aux1=q;
    for(q--;q>=0; q--){
        for(i--; aux%10!=1; i--, aux/=10);
        corr[q]=b[i];
        aux/=10;
    }
    printf("Os numeros sorteados foram: ");
    for(i=0; i<6; i++){
        printf("%d ", l[i]);
    }
    printf("\nOs seus numeros corretos foram: ");
    for(i=0; i<aux1; i++){
        printf("%d ", corr[i]);
    }
    free(corr);
    return 0;
}