#include<stdio.h>

int main(){
    char op;
    float a,b;
    printf("Escolha uma das operacoes basicas(+ - * /): ");
    op=getchar();
    printf("Escolha um numero para anteceder e outro para proceder a operacao, respectivamente\n");
    scanf("%f %f", &a, &b);
    switch(op){
        case '+':
            printf("O resultado eh %.4f", a+b);
            break;
        case '-':
            printf("O resultado eh %.4f", a-b);
            break;
        case '*':
            printf("O resultado eh %.4f", a*b);
            break;
        case '/':
            printf("O resultado eh %.4f", a/b);
            break;
        default:
            printf("Nao foi escolhida uma operacao valida");
    }
    return 0;
}