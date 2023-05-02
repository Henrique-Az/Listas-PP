#include<stdio.h>
#include<math.h>

void mat_print(int mat[10][10]){
    int i, j;
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(mat[i][j]<10&&mat[i][j]>0){ //Se o numero tiver so um digito, imprime espaços pra centralizar
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

int main()
{
    int mat[10][10], i, j;
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(i<j){
                mat[i][j]=2*i+7*j-2;
            }else if(i==j){
                mat[i][j]=3*i*i-1;
            }else{
                mat[i][j]=4*i*i*i-5*j*j+1;
            }
        }
    }
    mat_print(mat);
    return 0;
}