#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int d1, d2, n;
    printf("Digite quantas vezes voce quer rolar os dados: ");
    scanf("%d", &n);
    for(; n>0; n--){
        d1=rand()%6 +1; //+1 muda o intervalo de 0 a 5 pra 1 a 6
        d2=rand()%6 +1;
        if(d1>d2){
            printf("%d > %d", d1, d2);
        } else if(d1<d2){
            printf("%d < %d", d1, d2);
        } else if(d1==d2){
            printf("%d = %d", d1, d2);
        }
        printf("\n");
    }
    return 0;
}