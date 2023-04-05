#include <stdio.h>

int main()
{
    int a=0;
    for(a; a<=100000; a+=1000){
        printf("%d ", a);
    }
    return 0;
}