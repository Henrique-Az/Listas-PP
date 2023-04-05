#include <stdio.h>

int main(){
    int ma, me, n, i=0;
    for(i; i<10; i++){
        printf("Insira o %dº numero: ", i+1);
        scanf("%d", &n);
        switch(i){
            case 0: //Preciso que a primeira execução escreva o maior e o menor como n
                ma=n;
                me=n;
                break;
            default:
                if(n>ma){
                    ma=n;
                }
                if(n<me){
                    me=n;
                }
        }
    }
    printf("\nO maior numero eh %d e o menor eh %d", ma, me);
    return 0;
}