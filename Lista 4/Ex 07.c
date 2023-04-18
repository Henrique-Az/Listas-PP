#include<stdio.h>

float Fah(float C){
    return C*(9/5.0)+32;
}

int main(){
    float c;
    printf("Insira o valor da temperatura em Celsius: ");
    scanf("%f", &c);
    printf("%.2f graus Celsius equivale a %.2f graus Fahrenheit", c, Fah(c));
    return 0;
}