#include<stdio.h>


int main(){
    float dist, cons, rate;
    printf("Insira a distancia percorrida: ");
    scanf("%f", &dist);
    printf("Insira o consumo do carro nesse trecho: ");
    scanf("%f", &cons);

    rate=dist/cons;
    if(rate<8){
        printf("Venda o carro!");
    }else if(rate>=8 && rate<=14){
        printf("Economico!");
    }else{
        printf("Super economico!");
    }
    return 0;
}