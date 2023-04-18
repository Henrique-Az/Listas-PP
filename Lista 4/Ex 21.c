#include<stdio.h>

void exc(int n){
    int i, j;
    for(j=1; j<=n; j++){
        for(i=0; i<j; i++){
            printf("!");
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("Insira a quantidade de linhas: ");
    scanf("%d", &n);
    exc(n);
    return 0;
}