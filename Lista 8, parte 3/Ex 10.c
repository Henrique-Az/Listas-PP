#include<stdio.h>

int soma(float *a, float *b, float *c, int l1, int l2){
    int i;
    i=l1-l2;
    if(i>=0){ //Então l2 é o menor valor
        for(i=0; i<l2; i++){
            *(c+i)=*(a+i)+*(b+i);
        }
    } else{
        for(i=0;i<l1; i++){
            *(c+i)=*(a+i)+*(b+i);
        }
    }
    if(l1!=l2){
        return 0;
    }
    return 1;
}

int main(){
    int i, l1, l2, aux;
    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &l1);
    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &l2);
    aux=(l1>l2)?l1:l2;
    float a1[l1], a2[l2], a3[aux];
    for(i=0; i<l1; i++){
        printf("Insira o %d%c valor do primeiro vetor: ", i+1, 167);
        scanf("%f", a1+i);
    }
    for(i=0; i<l2; i++){
        printf("Insira o %d%c valor do segundo vetor: ", i+1, 167);
        scanf("%f", a2+i);
    }
    if(soma(a1, a2, a3, l1, l2)){
        printf("O valor da soma eh:\n");
        for(i=0; i<aux; i++){
            printf("%.1f ", *(a3+i));
        }   
    } else{
        printf("Erro: os vetores tem tamanhos diferentes\n");
        printf("A soma(com lixo) seria:\n");
        for(i=0; i<aux; i++){
            printf("%.1f ", *(a3+i));
        }
    }
    return 0;
}