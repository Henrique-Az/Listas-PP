#include<stdio.h>

void tri(int n){
    int i, j;
    for(j=1; j<=n; j++){ //Imprime a parte crescente do triangulo
        for(i=0; i<j; i++){
            printf("*");
        }
        printf("\n");
    }
    for(j-=2; j>0; j--){ //imprime a parte decrescente do triangulo, j precisa tirar 2 unidades, pois agora ele guarda n+1 de largura, e eu quero n-1
        for(i=0; i<j; i++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("Insira a largura do triangulo: ");
    scanf("%d", &n);
    tri(n);
    return 0;
}