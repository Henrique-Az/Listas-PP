#include<stdio.h>

int main(){
    int a[10], b, i;
    printf("Insira um valor para preencher o vetor: ");
    scanf("%d", &b);
    printf("\nEste eh o vetor preenchido:\n");
    for(i=0; i<10; i++){
        *(a+i)=b;
        printf("%d ", *(a+i));
    }
    return 0;
}