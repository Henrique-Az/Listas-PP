#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    printf("Digite o numero desejado:\n");
    scanf("%d", &x);

    if(x%2==0){
        printf("O numero %d eh par", x);
    }
    else{
        printf("O numero %d eh impar", x);
    }
    return 0;
}
