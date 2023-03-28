#include <stdio.h>
#include <math.h>

int main()
{
    float n1, n2;
    printf("Insira as duas notas do aluno:\n");
    scanf("%f %f", &n1, &n2);

    if((n1>=0 && n1<=10) && (n2>=0 && n2<=10))
        printf("A media das notas desse aluno eh %.1f", (n1+n2)/2);
    else
        printf("Uma das notas inseridas eh invalida");

    return 0;
}
