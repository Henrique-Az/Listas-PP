#include<stdio.h>
void mat_printer(float vet[5][5]);

int main(){
    float mat[5][5], X;
    int i, j, aux=1;
    for(i=0; i<5; i++){
        printf("Insira os valores da linha %d:\n", i+1);
        for(j=0; j<5; j++){
            scanf("%f", &mat[j][i]);
        }
    }
    mat_printer(mat);
    printf("Insira um numero: ");
    scanf("%f", &X);
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(mat[j][i]==X){
                printf("Esse numero foi encontrado na coluna %d e linha %d\n", j+1, i+1);
                aux=0;
            }
        }
    }
    if(aux){
        printf("nao encontrado");
        return 0;
    }
}

void mat_printer(float vet[5][5]){
    int i, j;
    printf("A matriz inserida foi:\n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("%.1f ", vet[j][i]);
        }
        printf("\n");
    }
}