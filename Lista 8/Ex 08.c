#include<stdio.h>

int main(){
    int v[6], i;

    for(i=0; i<6; i++){
        printf("Insira o valor %d: ", i+1);
        scanf("%d", v+i);
    }
    printf("Os valores inseridos sao:\n\n");
    for(i=0; i<6; i++){
        printf("%d ", *(v+i));
    }
    printf("\n\nE os enderecos desses numeros sao:\n\n");
    for(i=0; i<6; i++){
        printf("%p ", v+i);
    }
    return 0;
}