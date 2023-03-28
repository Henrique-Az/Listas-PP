#include<stdio.h>

int main(){
    int t;
    float s;
    printf("Insira o valor do salario do funcionario: ");
    scanf("%f", &s);
    printf("Insira o tempo de servico do funcionario: ");
    scanf("%d", &t);

    if(s>2000 && t<1){
        printf("O funcionario nao tem direito a reajuste");
    } else{
        if(s<=500){
            s*=1.25;
        } else if(s<=1000){
            s*=1.2;
        } else if(s<=1500){
            s*=1.15;
        } else if(s<=2000){
            s*=1.1;
        } //foram feitas todas as modificações relativas ao salário
        if(t<1){ //Só pra não precisar checar limite inferior em cada if
        } else if(t<=3){
            s+=100;
        } else if(t<=6){
            s+=200;
        } else if(t<=10){
            s+=300;
        } else{
            s+=500;
        }
        printf("O salario desse funcionario ficaria %.2f", s);
    }
    return 0;
}