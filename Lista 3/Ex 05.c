#include <stdio.h>

int main()
{
    int i=1;
    float a, s=0;
    for(i; i<=10; i++){
        printf("Insira o %dº numero: ", i);
        scanf("%f", &a);
        s+=a;
    }
    printf("\nA soma desses numeros eh %.2f", s);
    return 0;
}