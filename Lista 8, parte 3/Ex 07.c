#include<stdio.h>

void quant_maior(int *a, int *v, int *m, int n){
    int i;
    *m=*a;
    *v=0;
    for(i=1; i<n; i++){
        if(*(a+i)>*m){
            *m=*(a+i);
        }
    }
    for(i=0; i<n; i++){
        if(*(a+i)==*m){
            (*v)++;
        }
    }
}

int main(){
    int vet[20], i, vez, m;
    for(i=0; i<20; i++){
        printf("Insira o %d%c valor: ", i+1, 167);
        scanf("%d", vet+i);
    }
    printf("Seu vetor eh:\n\n");
    for(i=0; i<20; i++){
        printf("%d ", *(vet+i));
    }
    quant_maior(vet, &vez, &m, 20);
    printf("\n\nO maior numero eh %d, que aparece %d vezes", m, vez);
    return 0;
}