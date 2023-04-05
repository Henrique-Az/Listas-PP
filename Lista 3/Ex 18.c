#include<stdio.h>

int main(){
    double s=2000, t=1.015;
    int i;
    for(i=1996; i<=2023; i++){
        s*=t;
        t=2*t-1; //primeiro ano:1.015, segundo: 1.03, 1.06, 1.12... cresce exponencialmente, o salário dele também
    }
    printf("O salario atual desse funcionario eh %.2lf", s);
    return 0;
}