#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p, i, aux=0;
    if((p=(int *)calloc(1500, sizeof(int)))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    for(i=0; i<1500; i++){
        if(p[i]==0){
            aux++;
        }
        p[i]=i;
    }
    if(aux==1500){
        printf("O vetor realmente esta zerado corretamente\n\n");
    }
    printf("Os 10 primeiros valores sao: ");
    for(i=0; i<10; i++){
        printf("%d ", p[i]);
    }
    printf("\n\nOs 10 ultimos vetores sao: ");
    for(i=1490; i<1500; i++){
        printf("%d ", p[i]);
    }
    free(p);
    return 0;
}