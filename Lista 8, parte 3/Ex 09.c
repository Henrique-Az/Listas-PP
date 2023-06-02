#include<stdio.h>

int main(){
    int a[10], *p=a, i;

    for(i=0; i<10; i++){
        printf("Insira o %d%c valor: ", i+1, 167);
        scanf("%d", p+i);
        (*(p+i))++;
    }
    printf("O vetor, somado a 1, eh:\n\n");
    for(i=0; i<10; i++){
        printf("%d ", *(p+i));
    }
    return 0;
}