#include<stdio.h>

struct complex{
    float r, i;
};

int opcao(){
    int op;
    printf("Insira uma opcao:\n\n");
    printf("1- Some os dois numeros:\n\n");
    printf("2- Multiplique os dois numeros:\n\n");
    fflush(stdin);
    scanf("%d", &op);
    if(op!=1&&op!=2){
        printf("Opcao invalida, tente novamente:\n\n");
        opcao(op);
    }
    return op;
}

int main(){
    struct complex n1, n2, n3;
    int op;
    printf("Insira a parte real e a parte imaginaria do primeiro numero: ");
    scanf("%f %f", &n1.r, &n1.i);
    printf("Insira a parte real e a parte imaginaria do segundo numero: ");
    scanf("%f %f", &n2.r, &n2.i);

    op=opcao();

    if(op==1){
        n3.r = n1.r+n2.r;
        n3.i = n1.i+n2.i;
    } else{
        n3.r = n1.r*n2.r - n1.i*n2.i;
        n3.i = n1.r*n2.i + n1.i*n2.r;
    }
    printf("O numero resultante eh %.2f + %.2fi", n3.r, n3.i);
    return 0;
}