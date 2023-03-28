#include<stdio.h>

int main(){
    float a,b,c,x1,x2,d;
    printf("Insira o coeficiente que acompanha a variavel ao quadrado: ");
    scanf("%f", &a);
    printf("Insira o coeficiente que acompanha a variavel elevada a 1: ");
    scanf("%f", &b);
    printf("Insira o termo independente: ");
    scanf("%f", &c);
    if(a!=0){
        d=b*b-4*a*c;
        if(d>0){
            x2=((-1)*b+sqrt(d))/(2*a);
            x1=((-1)*b-sqrt(d))/(2*a);
            printf("A equacao tem duas solucoes: %.2f e %.2f",x1,x2);
        } else if(d==0){
            x1=(-1)*b/(2*a);
            printf("A equacao tem uma solucao: %.2f", x1);
        } else{
            printf("A equacao nao tem solucao real");
        }
    }
    else{
        printf("Essa nao eh uma equacao de segundo grau");
    }
    return 0;
}