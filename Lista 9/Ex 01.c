#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p, i;
    if((p=(int*)malloc(5*sizeof(int)))==NULL){
        printf("A alocacao falhou");
        exit(1);
    }
    for(i=0; i<5; i++){
        printf("Insira o valor da %d%c posicao", i+1, 167);
        scanf("%d", p+i);
    }
    printf("Os valores digitados foram: ");
    for(i=0; i<5; i++){
        printf("%d ", *(p+i));
    }
    free(p);
    return 0;
}