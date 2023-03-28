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
    if(x<y){
        printf("O numero %d eh maior, e a diferenca entre os dois numeros digitados eh %d", y, y-x);
    }
    if(x==y){ //Isso resolve o problema do programa anterior, que desconsidera essa possibilidade
        printf("Numeros iguais");
    }


    return 0;
}
