#include<stdio.h>

void mat_printer(float vet[4][4]);

int main(){
    float vet[4][4];
    int i, j, maior_i, maior_j;
    for(i=0; i<4; i++){
        printf("Insira os valores da linha %d:\n", i+1);
        for(j=0; j<4; j++){
            scanf("%f", &vet[j][i]);
            if(i==0&&j==0){ //Força o maior a ser o primeiro numero da esquencia
                maior_j=j;
                maior_i=i;
            } else if(vet[j][i]>vet[maior_j][maior_i]){
                maior_j=j;
                maior_i=i;
            }
        }
    }
    mat_printer(vet);
    printf("O maior valor esta na linha %d, coluna %d", maior_i+1, maior_j+1);
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