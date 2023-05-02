#include<stdio.h>

void mat_printer(float vet[4][4]);

int main(){
    float vet[4][4];
    int i, j, k=0;
    for(i=0; i<4; i++){
        printf("Insira os valores da linha %d:\n", i+1);
        for(j=0; j<4; j++){
            scanf("%f", &vet[j][i]);
            if(vet[j][i]>10){
                k++;
            }
        }
    }
    mat_printer(vet);
    printf("\nExistem um total de %d numeros maiores que 10", k);
    return 0;
}

void mat_printer(float vet[4][4]){
    int i, j;
    printf("A matriz inserida eh:\n\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%.1f ", vet[j][i]);
        }
        printf("\n");
    }
}