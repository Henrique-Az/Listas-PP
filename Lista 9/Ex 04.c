#include<stdio.h>
#include<stdlib.h>

int main(){
    char *p;
    int l, i, aux;
    printf("Insira a quantidade de letras que voce deseja inserir: ");
    scanf("%d", &l);
    l++;//para considerar o /n no fim como um caractere
    if((p=(char *)malloc(l))==NULL){
        printf("A alocacao falhou");
        exit(1);
    }
    printf("Insira a sua frase: ");
    setbuf(stdin, NULL);
    fgets(p, l, stdin);
    for(i=0, aux=0; p[i+aux]!='\0'; i++){
        if(p[i+aux]=='a'||p[i+aux]=='e'||p[i+aux]=='i'||p[i+aux]=='o'||p[i+aux]=='u'||p[i+aux]=='A'||p[i+aux]=='E'||p[i+aux]=='I'||p[i+aux]=='O'||p[i+aux]=='U'){
            aux++;
            i--; //Isso serve para que eu não ande duas posições na próxima leitura sem querer
        }else{
            p[i]=p[i+aux];
        }
    }
    p[i]='\0';

    printf("A string, sem vogais, eh: %s", p);
    free(p);
    return 0;
}