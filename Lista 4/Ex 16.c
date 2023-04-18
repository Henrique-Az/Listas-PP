#include<stdio.h>

void desenha_linha(int i){
    int j;
    printf("\n");
    for(j=0; j<i; j++){
        printf("=");
    }
}

int main(){
    int x;
    printf("Insira quantos iguais devem ser impressos: ");
    scanf("%d", &x);
    desenha_linha(x);
    return 0;
}