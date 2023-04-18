#include<stdio.h>

void cons(float d, float k){
    int cons=d/k;
    if(cons<8){
        printf("Venda o carro!");
    } else if(cons<14){
        printf("Economico");
    } else{
        printf("Super economico");
    }
}

int main(){
    float d, l;
    printf("Insira a distancia percorrida: ");
    scanf("%f", &d);
    printf("Insira o consumo do carro: ");
    scanf("%f", &l);
    cons(d, l);
    return 0;
}