#include<stdio.h>

int main(){
    int n,i,c,num=1;
    printf("Insira quantas linhas devem ser escritas: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){ //Repete n vezes, uma pra cada linha
        for(c=0; c<i; c++){ //Repete i vezes, imprimindo a quantidade de números por dígito
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}