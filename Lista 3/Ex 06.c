#include <stdio.h>

int main()
{
    int i=1, a;
    float s=0;
    for(i; i<=10; i++){ 
    /*quando i for 10, ele ainda irá rodar e ainda incrementará 1
    para compensar isso, é necessário pegar o antecessor de i após o for*/
        printf("Insira o %dº numero: ", i);
        scanf("%d", &a);
        s+=a;
    }
    i--;
    printf("\nA media desses numeros eh %.1f", s/i);
    return 0;
}