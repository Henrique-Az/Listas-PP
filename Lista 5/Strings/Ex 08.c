#include<stdio.h>
#include<string.h>

int main(){
    char frase[100], l1, l2;
    int i;
    printf("Insira a sua frase:\n");
    fgets(frase, 100, stdin);
    printf("Qual letra deve ser trocada: ");
    fflush(stdin); //limpando o resto do buffer que não entrou na string
    scanf("%c", &l1);
    printf("Por qual letra voce deseja trocar: ");
    scanf(" %c", &l2);
    for(i=0; i<100; i++){
        if(frase[i]==l1){
            frase[i]=l2;
        }
    }
    printf("%s", frase);
    return 0;
}