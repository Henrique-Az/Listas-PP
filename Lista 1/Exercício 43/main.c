#include <stdio.h>
#include <stdlib.h>

int main()
{
    //assumindo que esse desconto de 10% são para compras a vista
    float v;

    printf("Digite o valor do produto:\n")/
    scanf("%f", &v);
    printf("O valor do produto, a vista eh %.2f\n", v*0.9);
    printf("O valor das parccelas, em tres vezes, eh %.2f\n", v/3);
    printf("O valor da comissao, pagando a vista eh %.2f\n", v*0.05*0.9);
    printf("O valor da comissao, pagando parcelado, eh %.2f", v*0.05);
    return 0;
}
