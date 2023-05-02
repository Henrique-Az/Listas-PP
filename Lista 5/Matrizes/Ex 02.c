#include<stdio.h>
void mat_printer(int vet[5][5]);

int main(){
    int vet[5][5], i, j;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(i==j){
                vet[i][j]=1;
            } else{
                vet[i][j]=0;
            }
        }
    }
    mat_printer(vet);
    return 0;
}

void mat_printer(int vet[5][5]){
    int i, j;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("%d ", vet[j][i]);
        }
        printf("\n");
    }
}