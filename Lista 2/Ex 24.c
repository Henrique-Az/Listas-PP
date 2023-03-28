#include<stdio.h>

int main(){
    int op;
    float p;
    printf("Insira o valor do produto: ");
    scanf("%f", &p);
    do{
        printf("Insira um dos seguintes estados:\n");
        printf("1 - Minas gerais\n");
        printf("2 - Sao Paulo\n");
        printf("3 - Rio de Janeiro\n");
        printf("4 - Mato Grosso do Sul\n");
        scanf("%d", &op);
        if(op<1 || op>4){
            printf("Opcao invalida, tente novamente:\n\n");
        }
    } while(op<1 || op>4);
    
    switch(op){
        case 1:
            printf("O preco em MG eh %.2f", p*1.07);
            break;
        case 2:
            printf("O preco em SP eh %.2f", p*1.12);
            break;
        case 3:
            printf("O preco em RJ eh %.2f", p*1.15);
            break;
        case 4:
            printf("O preco em MS eh %.2f", p*1.08);
            break;
    }
    return 0;
}