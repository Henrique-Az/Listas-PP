#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    printf("Insira o numero desejado:\n");
    scanf("%f", &x);

    if(x>0){ //Zero pertence ao domínio da função sqrt(x) para números reais, mas pelo comando do exercício, faz mais sentido considerar que deve ser feito o quadrado desse número
        printf("A raiz quadrada desse numero eh %.2f", sqrt(x));
    }
    else{
        printf("O quadrado desse numero eh %.2f", x*x);
    }
    return 0;
}
