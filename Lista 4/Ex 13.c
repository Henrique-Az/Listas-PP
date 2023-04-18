#include<stdio.h>
#include<stdlib.h>

float calc(float a, float b, char op){
    if(!(op=='+'||op=='-'||op=='*'||op=='/')){
        printf("Operacao invalida");
        exit(1);
    }
    switch(op){
        case '+':
            return a+b;
        case '-':
            return a-b;
        case '/':
            return a/b;
        case '*':
            return a*b;
    }
}

int main(){
    float x, y;
    char a;
    printf("Insira dois numeros:\n");
    scanf("%f %f", &x, &y);
    printf("\nInsira a opcao:\n\n");
    printf("+ > soma\n");
    printf("- > subtracao\n");
    printf("* > multiplicacao\n");
    printf("/ > divisao\n");
    fflush(stdin);
    a=getchar();
    printf("\nO resultado eh %.1f", calc(x, y, a));
    return 0;
}