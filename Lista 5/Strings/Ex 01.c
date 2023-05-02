#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Insira a sua string: ");
    fgets(str, 100, stdin);
    printf("%s", str);
    return 0;
}