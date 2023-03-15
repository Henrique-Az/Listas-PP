#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, l, p, t;

    printf("Insira o comprimento e a largura do terreno:\n"); //não importa muito bem a ordem, não precisa dar qualquer forma de retorno para o user sobre as dimensões
    scanf("%f %f", &c, &l);
    printf("Insira o valor do preco do metro de tela:\n");
    scanf("%f", &p);

    printf("O custo para cercar esse terreno eh %.2f", p*2*(c+l));

    return 0;
}
