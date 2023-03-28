#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;

    printf("Digite os dois numeros:\n");
    scanf("%f %f",&x, &y);

    if(x==y){
        printf("Os dois numeros sao iguais.");
    }
    if(x>y){
        printf("O numero %f eh maior", x);
    }
    if(y>x){
        printf("O numero %f eh maior", y);
    }
    return 0;
}
