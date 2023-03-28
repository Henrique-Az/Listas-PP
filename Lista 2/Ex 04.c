#include <stdio.h>
#include <math.h>

int main()
{
    float x;

    printf("Insira o numero desejado:\n");

    scanf("%f", &x);

    if(x>0){ //mesmo caso do exercicio anterior, desconsidera-se 0 como um número positivo
        printf("O numero ao quadrado eh %.2f\n", x*x);
        printf("A raiz quadrada desse numero eh %.2f", sqrt(x));
    }
    return 0;
}
