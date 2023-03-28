#include<stdio.h>

int main(){
    int n1, n2, n3;
    float m;

    printf("Insira a nota do laboratorio: ");
    scanf("%d", &n1);
    printf("Insira a nota da avaliacao: ");
    scanf("%d", &n2);
    printf("Insira a nota do exame final: ");
    scanf("%d", &n3);

    if((n1>=0) && (n1<=10) && (n2>=0) && (n2<=10) && (n3>=0) && (n3<=10)){
        m=(n1*2+n2*3+n3*5)/10.0;
        if(m<=2.9){ //Não é necessário checar se o número é maior ou igual que 0, soma não pode gerar valores negativos
            printf("O aluno esta reprovado, com nota %.1f", m);
        }
        else if(m<=4.9){ //Não é necessário checar se o número é maior igual a 3, a falha do primeiro if garante isso
            printf("O aluno esta de recuperacao, com nota %.1f", m);
        }
        else{
            printf("O aluno foi aprovado, com nota %.1f", m);
        }
    }
    else{
        printf("Uma das notas inseridas eh invalida");
    }
    return 0;
}