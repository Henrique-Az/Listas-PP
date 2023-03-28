#include<stdio.h>

int main(){
    float n;
    int f;
    char con;
    printf("Insira a nota desse aluno: ");
    scanf("%f", &n);
    printf("Insira a quantidade de faltas desse aluno: ");
    scanf("%d", &f);
    if(n>=0 && n<=10 && f>=0){
        if(n<=3.9){
            con='E';
        }else if(n<=4.9){
            con='D';
        }else if(n<=7.4){
            con='C';
        }else if(n<=8.9){
            con='B';
        }else{
            con='A';
        }
        if(f>20){
            con++;
        }
        if(con=='F'){ //Compensa o fato que conceito E não perde mais conceito com falta
            con='E';
        }
        printf("O conceito desse aluno eh %c", con);
    }else{
        printf("Valor de nota ou e faltas invalido");
    }
    return 0;
}