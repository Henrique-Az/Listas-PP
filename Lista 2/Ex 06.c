#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;
    printf("Digite os numeros desejados:\n");
    scanf("%d %d", &x, &y);

    if(x>y){
        printf("O numero %d eh o maior, e a diferenca entre os dois numeros digitados eh %d", x, x-y);
    }
    if(x<y){ //n�o pode ser um else, pois existe a possiilidade n�o descrita no enunciado dos dois numeros serem iguais,que, neste caso, faria o programa n�o retornar nada para o usuario
        printf("O numero %d eh maior, e a diferenca entre os dois numeros digitados eh %d", y, y-x);
    }
    return 0;
}
