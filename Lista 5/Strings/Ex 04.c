#include<stdio.h>
#include<string.h>

int main(){
    char palavra[20], car;
    int i, j, k=0;
    printf("Insira a sua palavra: ");
    fgets(palavra, 20, stdin);
    j=strlen(palavra);
    do{
        printf("Insira uma letra para substituir as vogais: ");
        scanf(" %c", &car);
        if(!((car>='A'&&car<='Z')||(car>='a'&&car<='z'))){
            printf("Nao foi inserido uma letra, tente novamente: \n");
        }
    }while(!((car>='A'&&car<='Z')||(car>='a'&&car<='z')));
    for(i=0; i<j; i++){
        if(palavra[i]=='a'||palavra[i]=='b'||palavra[i]=='c'||palavra[i]=='d'||palavra[i]=='e'||palavra[i]=='A'||palavra[i]=='B'||palavra[i]=='C'||palavra[i]=='D'||palavra[i]=='E'){
            k++;
            palavra[i]=car;
        }
    }
    printf("%s", palavra);
    return 0;
}