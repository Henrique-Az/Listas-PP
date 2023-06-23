#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    double *p;
    int i;
    srand(time(NULL));
    printf("Insira quantos valores devem ser reservados(Devem ser alocados mais que 10): ");
    scanf("%d", &i);
    while(i<10){
        printf("Valor invalido, tente novamente: ");
        scanf("%d", &i);
    }
    if((p=(double *)malloc(i*sizeof(double)))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    printf("Os primeiros 10 numeros do vetor sao: ");
    for(i=0; i<10; i++){
        p[i]=rand()%101;
        printf("%.f ", p[i]);
    }
    free(p);
    return 0;
}