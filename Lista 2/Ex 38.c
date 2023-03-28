#include<stdio.h>

int main(){ //Mesma coisa do exercício 35, com a extra checagem do ano
    int d, m, ano, vale; //vale é uma variável para atribuir se esse dia é possível ou não
    printf("Insira o ano: ");
    scanf("%d", &ano);
    printf("Insira o mes: ");
    scanf("%d", &m);
    printf("Insira o dia: ");
    scanf("%d", &d);
    if(ano<=2023){
        if(m<1||m>12){
            vale = 0;
        } else{
            switch(m){
                case 1:
                    if(d<1||d>31){
                        vale=0;
                    } else vale=1;
                    break;
                case 2:
                    if((ano%400==0) || ((ano%4==0) && (ano%100!=0))){//checa se o ano é bissexto
                        if(d<1||d>29){
                            vale=0;
                        }else vale=1;
                    } else{
                        if(d<1||d>28){
                            vale=0;
                        }else vale=1;
                    }
                    break;
                case 3:
                    if(d<1||d>31){
                        vale=0;
                    } else vale=1;
                    break;
                case 4:
                    if(d<1||d>30){
                        vale=0;
                    } else vale=1;
                    break;
                case 5:
                    if(d<1||d>31){
                        vale=0;
                    } else vale=1;
                    break;
                case 6:
                    if(d<1||d>30){
                        vale=0;
                    } else vale=1;
                    break;
                case 7:
                    if(d<1||d>31){
                        vale=0;
                    } else vale=1;
                    break;
                case 8:
                    if(d<1||d>31){
                        vale=0;
                    } else vale=1;
                    break;
                case 9:
                    if(d<1||d>30){
                        vale=0;
                    } else vale=1;
                    break;
                case 10:
                    if(d<1||d>31){
                        vale=0;
                    } else vale=1;
                    break;
                case 11:
                    if(d<1||d>30){
                        vale=0;
                    } else vale=1;
                    break;
                case 12:
                    if(d<1||d>31){
                        vale=0;
                    } else vale=1;
                    break;
            }
        }
    } else vale=0;
    if(vale==1){
        printf("Essa data eh valida");
    } else{
        printf("Essa data eh invalida");
    }
    return 0;
}
