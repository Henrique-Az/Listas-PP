#include<stdio.h>

int main(){
    int i, sum=0;
    for(i=0; i<1000; i++){
        if(i%3==0 || i%5==0){
            printf("%d ", i);
        }
    }
    return 0;
}