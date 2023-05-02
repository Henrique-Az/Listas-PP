#include<stdio.h>

int main(){
    int vet[6], i;
    printf("Insira os valores para serem inseridos no vetor:\n");
    for(i=0; i<6; i++){
        scanf("%d", &vet[i]);
    }
    i--; //Para voltar o valor de i para 5;
    printf("Esse vetor, em sua ordem inversa, eh: ");
    for(;i>=0;i--){
        printf("%d ", vet[i]);
    }
    return 0;
}