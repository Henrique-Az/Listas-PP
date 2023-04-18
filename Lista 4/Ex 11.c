#include<stdio.h>
#include<stdlib.h>

float media(float a, float b, float c, char m){
    if(m=='A'||m=='a'){
        return (a+b+c)/3;
    } else if(m=='P'||m=='p'){
        return(5*a+3*b+2*c)/10;
    } else{
        printf("Opcao invalida");
        exit(1);
    }
}

int main(){
    float n1, n2, n3;
    char op;
    printf("Insira a primeira nota: ");
    scanf("%f", &n1);
    printf("Insira a segunda nota: ");
    scanf("%f", &n2);
    printf("Insira a terceira nota: ");
    scanf("%f", &n3);
    printf("Insira a opcao da media a ser usada:\n");
    printf("A - Media aritmetica\n");
    printf("P - Media ponderada\n");
    fflush(stdin);
    scanf("%c", &op);
    printf("A media dessas notas eh %.1f", media(n1, n2, n3, op));
    return 0;
}