#include<stdio.h>
#include<string.h>

int main(){
    char carros[5][20];
    int i, j, maior=0;
    float cons[5];
    for(i=0; i<5; i++){
        printf("Insira o nome do %d carro: ", i+1);
        fgets(&carros[i][0], 20, stdin);
        printf("Insira quantos quilometros esse carro percorre para 1 litro de gasolina: ");
        scanf("%f", &cons[i]);
        fflush(stdin);
    }
    for(i=1; i<5; i++){
        if(cons[maior]<cons[i]){
            maior=i;
        }
    }
    printf("O modelo mais economico eh o %s", &carros[maior][0]);
    printf("O consumo dos carros, para 1000km rodados, sao:\n\n");
    for(i=0; i<5; i++){
        for(j=0; carros[i][j]!='\n'; j++){
            printf("%c", carros[i][j]);
        }
        printf(" - %.1fL/1000km\n", 1000*cons[i]);
    }
    return 0;
}