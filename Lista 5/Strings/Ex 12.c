#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int len, i;

    printf("Insira a sua frase: ");
    fgets(str, 100, stdin);
    len=strlen(str)-1; //para desconsiderar o \n
    for(i=0; i<len; i++){
        if(str[i]>='A'&&str[i]<='Z'){ //Se foi digitado uma letra maiúscula...
            str[i]=65+((str[i]%65)+3)%26; //Como Y e Z "dão a volta", é útil fazer o modular por 65(conseguindo os valores de 0 a 25 para as letras)
        } else if(str[i]>='a'&&str[i]<='z'){
            str[i]=97+((str[i]%97)+3)%26; //Mesma tática do anterior, manipular de 0 a 25 é mais simples
        }
    }
    printf("%s", str);
    return 0;
}