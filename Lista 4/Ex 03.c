#include<stdio.h>
int ver(int x){
    if(x<0){
        return -1;
    }else if(x>0){
        return 1;
    }else if(x==0){
        return 0;
    }
    return 0;
}

int main(){
    int a, aux;
    printf("Insira um valor: ");
    scanf("%d", &a);
    aux=ver(a);
    if(aux==-1){
        printf("O numero eh negativo");
    }else if(aux==1){
        printf("O numero eh positivo");
    }else if(aux==0){
        printf("O numero eh 0");
    }
    return 0;
}