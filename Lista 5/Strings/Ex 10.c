#include<stdio.h>
#include<string.h>

int main(){
    char name[50];
    float p, v;
    printf("Insira o nome da mercadoria: ");
    fgets(name, 50, stdin);
    printf("Insira o valor da mercadoria: ");
    scanf("%f", &p);
    v=p*0.9;
    printf("%s", name);
    printf("valor total: %.2f\n", p);
    printf("Preco a vista: %.2f (%.2f de desconto)", v, 0.1*p);
    return 0;
}