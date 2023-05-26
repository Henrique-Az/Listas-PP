#include<stdio.h>
#include<string.h>

int subs(char *a, char *b){
    int i, j, aux, aux1;
    aux=strlen(a)-strlen(b);
    for(i=0; i<aux; i++){ //Define cada ponto inicial da comparação
        for(j=0, aux1=1; *(b+j)!='\n'; j++){
            if(*(b+j)!=*(a+j+i)){
                aux1--;
                break;
            }
        }
        if(aux1){
            return 1;
        }
    }
    return 0;    
}

int main(){
    char a[40], b[40];
    printf("Insira a primeira string: ");
    fgets(a, 40, stdin);
    printf("Insira a segunda string: ");
    fflush(stdin);
    fgets(b, 40, stdin);

    if(subs(a, b)){
        printf("B esta contida em A");
    } else{
        printf("B nao esta contida em A");
    }
    return 0;
}