#include<stdio.h>

int main(){
    int i, j, aux;
    float vet[10];

    for(i=0; i<10; i++){
        do{
            printf("Insira o numero na posicao %d: ", i);
            scanf("%f", &vet[i]);
            aux=0;
            for(j=0; j<i; j++){
                if(vet[i]==vet[j]){
                    printf("\nNumero ja inserido, tente novamente:\n");
                    aux=1;
                }
            }
        } while(aux);
    }
    for(i=0; i<10; i++){
        printf("%f.1 ", vet[i]);
    }
    return 0;
}