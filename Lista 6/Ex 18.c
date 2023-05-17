#include<stdio.h>
#include<string.h>

struct aeroporto{
    int o; 
    int d;
};

struct voo{
    int cod_d, cod_o;
};

int main(){
    struct voo v[5];
    struct aeroporto a[5];
    int i;

    for(i=0; i<5; i++){
        a[i].o=0;
        a[i].d=0;
    }
    for(i=0; i<5; i++){
        do{
            printf("Insira o codigo do aeroporto de origem do voo %d: ", i+1);
            scanf("%d", &v[i].cod_o);
            if(v[i].cod_o<0||v[i].cod_o>4){
                printf("Codigo invalido, tente novamente:\n\n");
            }
        }while(v[i].cod_o<0||v[i].cod_o>4);

        a[v[i].cod_o].o++;

        do{
            printf("Insira o codigo do aeroporto de destino do voo %d: ", i+1);
            scanf("%d", &v[i].cod_d);
            if(v[i].cod_d<0||v[i].cod_d>4){
                printf("Codigo invalido, tente novamente:\n\n");
            }
        }while(v[i].cod_d<0||v[i].cod_d>4);

        a[v[i].cod_d].d++;
        printf("\n");
    }
    printf("Os aeroportos, com suas quantidades de voos, sao:\n\n");
    for(i=0; i<5; i++){
        printf("Aeroporto %d, chegam %d voo(s), saem %d voo(s)\n", i, a[i].d, a[i].o);
    }
    return 0;
}