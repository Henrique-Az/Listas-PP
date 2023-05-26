#include<stdio.h>

int main(){
    float a[10];
    int i;
    printf("Os enderecos do ponteiro sao:\n");
    for(i=0; i<10; i++){
        printf("%p ", a+i);
    }
    return 0;
}