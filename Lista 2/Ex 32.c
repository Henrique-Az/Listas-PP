#include<stdio.h>

int main(){
    int cod, quant;
    printf("Insira o codigo do produto: ");
    scanf("%d", &cod);
    printf("Insira a quantidade de pedidos: ");
    scanf("%d", &quant);

    switch(cod){
        case 100:
            printf("O preço a ser pago eh %.2f", 1.2*quant);
            break;
        case 101:
            printf("O preço a ser pago eh %.2f", 1.3*quant);
            break;
        case 102:
            printf("O preço a ser pago eh %.2f", 1.5*quant);
            break;
        case 103:
            printf("O preço a ser pago eh %.2f", 1.2*quant);
            break;
        case 104:
            printf("O preço a ser pago eh %.2f", 1.7*quant);
            break;
        case 105:
            printf("O preço a ser pago eh %.2f", 2.2*quant);
            break;
        case 106:
            printf("O preço a ser pago eh %.2f", 1.0*quant);
            break;
    }
    return 0;
}