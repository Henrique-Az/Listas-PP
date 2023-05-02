#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void mat_print(int mat[4][4]){
    int i, j;
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(mat[i][j]<10&&mat[i][j]>=0){ //Se o numero tiver so um digito, imprime espaços pra centralizar
                printf("%d ", mat[i][j]);
                printf("   ");
            } else if(fabs(mat[i][j])<10){ //Se o numero tiver so um digito, mas negativo(não precisa checar se é negativo, primeira verificação já fez isso), imprime espaços pra centralizar
                printf("%d ", mat[i][j]);
                printf("  ");
            } else if((mat[i][j])<100&&mat[i][j]>0){
                printf("%d ", mat[i][j]);
                printf("  ");
            } else if(fabs(mat[i][j])<100){
                printf("%d ", mat[i][j]);
                printf(" ");
            } else if((mat[i][j])<1000&&mat[i][j]>0){
                printf("%d ", mat[i][j]);
                printf(" ");
            } else{ //Só centraliza se o número tiver 4 ou menos espaços, para generalizar, eu precisaria da quantidade de espaços do maior da coluna e/ou linha da matriz
                printf("%d ", mat[i][j]);
            }
        }
        printf("\n");
    }
}

int main(){
    int i, j, mat[4][4];
    srand(time(NULL));
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            mat[i][j]=rand()%20+1; //rand()%20 gera de [0,19], +1 coloca no intervalo pedido
        }
    }
    mat_print(mat);
    printf("\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(i<j){
                mat[i][j]=0;
            }
        }
    }
    mat_print(mat);
    return 0;
}