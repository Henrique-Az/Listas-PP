#include<stdio.h>
#include<string.h>

int main(){
    char frase[200], copy[200];
    int i, k, len;
    printf("Insira uma frase:\n");
    fgets(frase, 200, stdin);
    len=strlen(frase)-1; //Removendo o \n como um caractere
    for(i=0, k=0; i<len; i++, k++){
        if(frase[k]=='r'&&(frase[k+1]>='a'&&frase[k+1]<='z')||(frase[k+1]>='A'&&frase[k+1]<='Z')){ //se achar um r, e a proxima letra for uma letra
            copy[i]='l';
            if(frase[k+1]=='r'){ //se tiver dois r's seguidos
                k++; //Pula esse caractere na próxima execução
            }
        } else{
            copy[i]=frase[k];
        }
    }
    copy[i]='\0'; //Manualmente inserindo \0
    printf("Uma pessoa com disfalia diria essa frase como:\n%s", copy);
    return 0;
}