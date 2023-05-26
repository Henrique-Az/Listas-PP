#include<stdio.h>

int main(){
    int v[10], i, *min=v, *max=v; //Inicializa os dois ponteiros como a primeira posicao
    for(i=0; i<10; i++){
        printf("Insira o valor da posicao %d: ", i+1);
        scanf("%d", v+i);
    }
    for(i=1; i<10; i++){
        if(*(v+i)>*max){
            max=v+i;
        } else if(*(v+i)<*min){
            min=v+i;
        }
    }
    printf("O valor minimo eh %d e o maximo eh %d", *min, *max);
    return 0;
}