#include <stdio.h>

int main()
{
    float a, s=0;
    int i=0;
    
    for(i; i<10; i++){
        printf("Digite o %dº numero: ", i+1); 
        /*Esse programa não tem o mesmo problema do anterior, mas precisa
        incluir o +1 dentro do prinf*/
        scanf("%f", &a);
        while(a<0){
            printf("\nNúmero invalido, digite um valor positivo: ");
            scanf("%f", &a);
        }
        s+=a;
    }
    printf("A media desses numeros eh %f", s/i);
    return 0;
}