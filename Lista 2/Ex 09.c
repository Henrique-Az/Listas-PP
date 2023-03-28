#include <stdio.h>
#include <math.h>

int main()
{
    float s, p; //float pelos centavos
    printf("Insira o valor do salario do funcionario:\n");
    scanf("%f", &s);
    printf("Insira o valor da prestacao do emprestimo:\n");
    scanf("%f", &p);

    s=s*1.2;
    if(p>s){
        printf("Emprestimo nao concedido");
        }
    else{
        printf("Emprestimo concedido");
        }
    return 0;

}
