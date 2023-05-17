#include<stdio.h>
#include<string.h>

struct data{
    int d, m, a;
};

struct comp{
    char nome[62];
    struct data data;
};

int val_dia(int d, int m, int a);

int main(){
    struct comp c[5];
    int i, m, a, aux;
    for(i=0; i<5; i++){
        printf("Insira o nome do compromisso %d: ", i+1);
        setbuf(stdin, NULL);
        fgets(c[i].nome, 62, stdin);
        c[i].nome[strlen(c[i].nome)-1]='\0';
        do{
            printf("Insira a data do compromisso(DD/MM/AA): ");
            scanf("%d %d %d", &c[i].data.d, &c[i].data.m, &c[i].data.a);
            m=val_dia(c[i].data.d, c[i].data.m, c[i].data.a);
            if(m){
                printf("Data invalida, tente novamente:\n\n");
            }
        } while(m);
    }
    m=1;
    while(m!=0){
        do{
            printf("\nInsira um mes e um ano: ");
            scanf("%d %d", &m, &a);
            if(m<0||m>12){
                printf("Mes invalido, tente novamente:\n\n");
            }
        }while(m<0||m>12);
        if(m!=0){
            printf("Os compromissos para esse mes sao:\n");
            for(i=0, aux=0; i<5; i++){
                if(c[i].data.m==m && c[i].data.a==a){
                    printf("%s, %d/%d/%d\n", c[i].nome, c[i].data.d, c[i].data.m, c[i].data.a);
                    aux++;
                }
            }
            if(aux==0){
                printf("Nenhum compromisso foi achado\n");
            }
        }
    }
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