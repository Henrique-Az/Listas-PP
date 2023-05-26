#include<stdio.h>

int main(){
    float mat[3][3];
    int i;
    printf("O endereco das posicoes sao:\n");
    for(i=0; i<9; i++){
        printf("[%d] [%d] %p ", i/3+1, i%3+1, mat+i);
        if(i%3==2){
            printf("\n");
        }
    }
    return 0;
}