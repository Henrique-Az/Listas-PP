#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i, j, k=0;
    printf("Insira a sua string: ");
    fgets(str, 100, stdin);
    j=strlen(str);
    for(i=0; i<j; i++){ //j guarda a posição do \0, não precisa checar ele
        if(str[i]=='1'){
            k++;
        }
    }
    printf("Foram inseridos %d 1's", k);
    return 0;
}