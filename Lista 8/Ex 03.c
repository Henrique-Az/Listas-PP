#include<stdio.h>

int main(){
    int x, y;

    printf("O endereco de x eh %p e o de y eh %p\n\n", &x, &y);

    if(&x>&y){
        printf("O maior endereco eh %p", &x);
    } else{
        printf("O maior endereco eh %p", &y);
    }
    return 0;
}