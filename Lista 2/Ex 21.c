#include<stdio.h>
#include<math.h>

int main(){
    int op;
    float a, b;
    do{
        printf("Escolha a opcao:\n");
        printf("1- Soma de 2 numeros.\n");
        printf("2- A diferenca entre dois numeros (maior pelo menor).\n");
        printf("3- Produto entre 2 numeros.\n");
        printf("4- Divisao entre 2 numeros (o denominador nao pode ser zero).\n");
        scanf("%d", &op);
        if(op<1 || op>4){
            printf("Opcao invalida, tente novamente:\n\n");
        }
    } while(op<1 || op>4);
    switch(op){
        case 1:
            printf("Insira as parcelas da soma:\n");
            scanf("%f %f", &a, &b);
            printf("O resultado eh %.2f", a+b);
            break;
        case 2:
            printf("Insira as parcelas da subtracao:\n");
            scanf("%f %f", &a, &b);
            printf("O resultado eh %.2f", fabs(a-b)); //função dá o módulo da expressão, garantindo que a distância fique certa, mesmo que o usuário digite o menor primeiro          
            break;
        case 3:
            printf("Insira os produtos da multiplicacao:\n");
            scanf("%f %f", &a, &b);
            printf("O resultado eh %.2f", a*b);
            break;
        case 4:
            printf("Insira o numerador e o denominador da divisao: \n");
            scanf("%f %f", &a, &b);
            printf("O resultado eh %.2f", a/b);
            break;
    }
    return 0;
}