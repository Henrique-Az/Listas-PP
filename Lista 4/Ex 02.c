#include<stdio.h>
int val_dia(int d, int m, int a);
void mes(int m);

int main(){
    int d,m,a, aux;

    do{
        printf("Insira o dia: ");
        scanf("%d", &d);

        printf("Insira o mes: ");
        scanf("%d", &m);

        printf("Insira o ano: ");
        scanf("%d", &a);

        aux=val_dia(d, m, a);

        if(aux){
            printf("\nData invalida, tente novamente:\n\n\n");
        }
    }while(aux);

    printf("%d de ", d);
    mes(m);
    printf(" de %d", a);
    return 0;
}
int val_dia(int d, int m, int a){
    if(m<1||m>12){
        return 1;
    } else{
        switch(m){
            case 1:
                if(d<1||d>31){
                    return 1;
                } else return 0;
            case 2:
                if((a%400==0) || ((a%4==0) && (a%100!=0))){//checa se o ano é bissexto
                    if(d<1||d>29){
                        return 1;
                    }else return 0;
                } else{
                    if(d<1||d>28){
                        return 1;
                    }else return 0;
                }
            case 3:
                if(d<1||d>31){
                    return 1;
                } else return 0;
            case 4:
                if(d<1||d>30){
                    return 1;
                } else return 0;
            case 5:
                if(d<1||d>31){
                    return 1;
                } else return 0;
            case 6:
                if(d<1||d>30){
                    return 1;
                } else return 0;
            case 7:
                if(d<1||d>31){
                    return 1;
                } else return 0;
            case 8:
                if(d<1||d>31){
                    return 1;
                } else return 0;
            case 9:
                if(d<1||d>30){
                    return 1;
                } else return 0;
            case 10:
                if(d<1||d>31){
                    return 1;
                } else return 0;
            case 11:
                if(d<1||d>30){
                    return 1;
                } else return 0;
            case 12:
                if(d<1||d>31){
                    return 1;
                } else return 0;
        }
    }
}

void mes(int m){
    switch(m){
        case 1:
            printf("Janeiro");
            break;
        case 2:
            printf("Fevereiro");
            break;
        case 3:
            printf("Marco");
            break;
        case 4:
            printf("Abril");
            break;
        case 5:
            printf("Maio");
            break;
        case 6:
            printf("Junho");
            break;
        case 7:
            printf("Julho");
            break;
        case 8:
            printf("Agosto");
            break;
        case 9:
            printf("Setembro");
            break;
        case 10:
            printf("Outubro");
            break;
        case 11:
            printf("Novembro");
            break;
        case 12:
            printf("Dezembro");
            break;
    }
}