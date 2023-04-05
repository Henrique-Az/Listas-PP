#include<stdio.h>

int main(){
    int a=0;
    while((1.5+0.02*a)>(1.1+0.03*a)){
        a++;
    }
    printf("Em %d anos, Ze sera maior que Chico", a);
}