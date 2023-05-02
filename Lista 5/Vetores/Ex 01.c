#include<stdio.h>

int main(){
    int A[6]={1,0,5,-2,-5,7}, sum, i;
    sum=A[0]+A[1]+A[5];
    A[4]=100; //Entende-se que posição 4 é o endereço 4, não o quarto endereço
    for(i=0; i<6; i++){
        printf("%d\n", A[i]);
    }
    return 0;
}