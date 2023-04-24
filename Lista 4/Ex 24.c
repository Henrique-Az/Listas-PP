#include<stdio.h>

void tri(int n){
    int i, j;
    for(j=1; j<=n; j++){
        for(i=0; i<n-j; i++){ //Imprime, a esquerda, a quantidade de espacos necessarios
            printf(" ");
        }
        for(i=0; i<2*j-1; i++){ //imprime a quantidade de *, que é simplesmente o jº impar dos naturais
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    int x;
    printf("Insira a quantidade de linhas desejadas: ");
    scanf("%d", &x);
    tri(x);
    return 0;
}
