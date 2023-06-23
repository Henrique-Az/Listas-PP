#include<stdio.h>

int main(){
    int *p, l, i, odd=0, even=0;
    printf("Quantos valores devem ser lidos: ");
    scanf("%d", &l);
    if((p=(int *)malloc(l*sizeof(int)))==NULL){
        printf("Falha na alocacao");
        exit(1);
    }
    for(i=0; i<l; i++){
        printf("Insira o valor da %d%c posicao: ", i+1, 167);
        scanf("%d", p+i);
        if(*(p+i)%2==0){
            even++;
        } else{
            odd++;
        }
    }
    printf("Foram inseridos %d pares e %d impares", even, odd);
    free(p);
    return 0;
}