#include<stdio.h>

struct vetor {
    float a;
    float b;
    float c;
};
typedef struct vetor vetor;

vetor sum(vetor v1, vetor v2){
    vetor sum;
    sum.a=v1.a+v2.a;
    sum.b=v1.b+v2.b;
    sum.c=v1.c+v2.c;

    return sum;
}

int main(){
    vetor v1, v2, v3;

    printf("Insira as coordenadas x, y e z do primeiro vetor:\n");
    scanf("%f %f %f", &v1.a, &v1.b, &v1.c);
    printf("Insira as coordenadas x, y e z do segundo vetor:\n");
    scanf("%f %f %f", &v2.a, &v2.b, &v2.c);
    v3=sum(v1, v2);
    printf("A soma dos vetores gera o vetor(%.2f, %.2f, %.2f)", v3.a, v3.b, v3.c);
    return 0;
}