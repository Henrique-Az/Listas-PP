#include<stdio.h>
#include<string.h>

int main(){
    char frase[100], aux[100];
    int i, j, k;
    printf("Insira a sua frase:\n");
    fgets(frase, 100, stdin);
    strcpy(aux, frase);
    j=strlen(frase);
    for(i=0, k=0; k<j; i++, k++){
        while(aux[k]==' '){ //Toda vez que ele achar um espaço na frase, ele pula pro próximo caractere
            k++;
        }
        frase[i]=aux[k];
    }
    frase[i]='\0'; //manualmente definindo o fim da frase
    printf("%s", frase);
    return 0;
}