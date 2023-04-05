#include<stdio.h>

int main(){
    int op;
    float a, b;

    do{
        printf("1- Adicao\n2- Subtracao\n3- Multiplicacao\n4- Divisao\n5- Saida\n");
        scanf("%d", &op);
        switch(op){
            case 1:
                printf("\nInsira os dois numeros para a soma\n");
                scanf("%f %f", &a, &b);
                printf("\nA soma entre esses numeros eh %.2f\n\n", a+b);
                break;
            case 2:
                printf("Insira os dois numeros para a subtracao\n");
                scanf("%f %f", &a, &b);
                printf("A subtracao entre esses numeros eh %.2f\n\n", a-b);
                break;
            case 3:
                printf("Insira os dois numeros para a multiplicacao\n");
                scanf("%f %f", &a, &b);
                printf("O produto desses numeros eh %.2f\n\n", a*b);
                break;
            case 4:
                printf("Insira os dois numeros para a divisao\n");
                scanf("%f %f", &a, &b);
                printf("A divisao desses numeros eh %.2f\n\n", a/b);
                break;
        }
   } while(op!=5);
   return 0;
}