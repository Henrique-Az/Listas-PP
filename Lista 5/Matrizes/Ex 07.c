#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void mat_print(int mat[5][5]);
int rep(int mat[5][5], int i, int j);

int main(){
    int i, j, mat[5][5];
    srand(time(NULL));
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            do{
            mat[i][j]=rand()%100;
            }while(rep(mat, i, j)); // função que checa se esse número já foi inserido
        }
    }
    mat_print(mat);
    return 0;
}

void mat_print(int mat[5][5]){
    int i, j;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
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

int rep(int mat[5][5], int k, int l){
    int i, j;
    for(i=0; i<=k; i++){
        if(i==k){ //Se você estiver na linha da sua cartela, você não precisa checar os 5 da linha, só até o l da linha(não pode checar o próprio l, sen ão você tá perguntando se ele é igual a ele mesmo)
            for(j=0; j<l; j++){
                if(mat[k][l]==mat[i][j]){
                    return 1;
                }
            }
        }else{
            for(j=0; j<5; j++){
                if(mat[k][l]==mat[i][j]){
                    return 1;
                }
            }
        }
    }
    return 0;
}