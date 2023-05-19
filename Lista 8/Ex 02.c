#include<stdio.h>

int main(){
    int a=5, *pa=&a;
    float b=2.3, *pb=&b;
    char c='a', *pc=&c;

    printf("Antes das modificacoes: Inteiro: %d. Real %.2f. Char: %c\n\n", *pa, *pb, *pc);

    printf("Insira o valor desejado para as variaveis: ");

    scanf("%d%f %c", pa, pb, pc);

    printf("Depois das modificacos: Inteiro: %d. Real %.2f. Char: %c", *pa, *pb, *pc);
    
    return 0;
}