#include<stdio.h>

int negativos(float *vet, int N){
    int i, aux;
    for(i=0, aux=0; i<N; i++){
        if(*(vet+i)<0){
            aux++;
        }
    }
    return aux;
}

int main(){
    float vet[10];
    int i;

    for(i=0; i<10; i++){
        printf("Insira o %d%c valor: ", i+1, 167);
        scanf("%f", vet+i);
    }
    printf("Foram inseridos %d numeros negativos", negativos(vet, 10));
    return 0;
}