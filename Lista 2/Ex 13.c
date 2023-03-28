#include<stdio.h>

int main(){
    float n1, n2, n3, m;
    printf("Insira as tres notas:\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    m=(n1+n2+2*n3)/4;

    if(m<60){
        printf("O aluno nao foi aprovado, com nota %.1f", m);
    }
    else{
        printf("O aluno foi aprovado, com nota %.1f", m);}
    return 0;
}