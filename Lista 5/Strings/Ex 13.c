#include<stdio.h>
#include<string.h>

int main(){
    char str[100], rev[100], aux[100];
    int i, k, len;
    printf("Insira uma string: ");
    fgets(str, 100, stdin);
    strcpy(aux, str);
    len=strlen(str);
    for(i=0, k=0; k<len; i++, k++){ //palindromos desconsideram espaços, string precisa ter espaços removidos
        while(aux[k]==' '){ //Toda vez que ele achar um espaço na frase, ele pula pro próximo caractere
            k++;
        }
        str[i]=aux[k];
    }
    str[i]='\0'; //manualmente definindo o fim da frase
    len=strlen(str)-1; //desconsiderando \n
    for(i=0; i<len; i++){
        rev[i]=str[len-1-i]; //Não só imprime o inverso, mas imprime o inverso menos 1, strlen não me dá o espaço de memória da última, me dá 1 a mais
    }
    rev[len]='\n';
    rev[len+1]='\0';
    if(strcmp(str, rev)){ //Função retorna 0 se eles forem iguais
        printf("A string nao eh um palindromo");
    } else{
        printf("A string eh um palindromo");
    }
    return 0;
}