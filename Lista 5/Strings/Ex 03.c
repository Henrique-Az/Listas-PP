#include<stdio.h>
#include<string.h>

int main(){
    char str[100], strdest[100];
    int i, j, k;

    printf("Insira a sua palavra: ");
    fgets(str, 100, stdin);
    j=strlen(str)-1;
    k=j;
    strdest[j]='\0'; //Definindo o final da string destino
    for(i=0; i<j; i++){
        k--;
        strdest[i]=str[k];
    }
    printf("%s\n", strdest);
    return 0;
}
