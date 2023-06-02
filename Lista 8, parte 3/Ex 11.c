#include<stdio.h>

float maior(float *a, int N){
    int i;
    float *maior=a;
    for(i=1; i<N; i++){
        if(*(a+i)>*maior){
            maior=a+i;
        }
    }
    return *maior;
}

int main(){
    float a[10];
    int i, k;
    for(i=0; i<10; i++){
        printf("Insira o %d%c valor: ", i+1, 167);
        scanf("%f", a+i);
    }
    printf("Insira quantos elementos devem ser impressos por linha: ");
    scanf("%d", &k);
    
    for(i=0; i<10; i++){
        printf("%.2f ", *(a+i));
        if((i+1)%k==0){
            printf("\n");
        }
    }
    printf("\n\n O maior elemento eh %.2f", maior(a, 10));
    return 0;
}