#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p, *aux, tam=10, i;
    if((p=(int*)malloc(tam*sizeof(int)))==NULL){
        printf("Erro de alocacao");
        return 0;
    }
    do{
        for(i=0; i<10; i++){
            printf("Insira o %d%c numero(Insira zero para sair): ", tam-9+i, 167);
            scanf("%d", &p[tam+i-10]);
            if(p[tam+i-10]==0){
                break;
            }
        }
        if(i==10){
            tam+=10;
            aux=p;
            if((p=(int*)malloc(tam*sizeof(int)))==NULL){
                printf("Erro de alocacao");
                return 0;
            }
            for(i=0; i<tam-10; i++){
                p[i]=aux[i];
            }
            i=10;
            free(aux);
        }
    } while(i==10);
    tam-=10;
    tam+=i;
    printf("O vetor lido eh: ");
    for(i=0; i<tam; i++){
        printf("%d ", p[i]);
    }
    free(p);
    return 0;
}