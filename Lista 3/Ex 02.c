#include <stdio.h>

int main()
{
    int a=1;
    for(a; a<=100;a++){
        printf("%d ", a);
    }
    printf("\n\n");
    a=1;
    while(a<=100){
        printf("%d ", a);
        a++;
    }
    printf("\n\n");
    a=1;
    
    do{
        printf("%d ", a);
        a++;
    } while(a<=100);
    
    return 0;   
}