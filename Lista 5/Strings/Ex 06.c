#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i, j;
    printf("Insira sua string: ");
    fgets(str, 100, stdin);
    j=strlen(str);
    for(i=0; i<j; i++){
        if(str[i]>96&&str[i]<123){
            str[i]-=32;
        }
    }
    printf("%s", str);
    return 0;
}