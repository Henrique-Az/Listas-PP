#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    printf("Insira o numero desejado:\n");
    scanf("%f", &x);

    if(x>0){ //Zero pertence ao dom�nio da fun��o sqrt(x) para n�meros reais, mas pelo comando do exerc�cio, faz mais sentido considerar que deve ser feito o quadrado desse n�mero
        printf("A raiz quadrada desse numero eh %.2f", sqrt(x));
    }
    else{
        printf("O quadrado desse numero eh %.2f", x*x);
    }
    return 0;
}
