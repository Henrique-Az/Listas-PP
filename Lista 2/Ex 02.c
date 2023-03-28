#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    printf("Insira o numero desejado:\n");
    scanf("%f", &x);

    if(x<0){
        printf("Esse numero eh invalido");
    }
    else{
        printf("A raiz quadrada desse numero eh %.2f", sqrt(x));
    }
    return 0;
}
