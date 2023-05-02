#include<stdio.h>

int main(){
    int vet[6], mapa[6], sum=0, i, j=0;
    printf("Insira os seus 6 numeros: \n");
    for(i=0; i<6; i++){
        scanf("%d", &vet[i]);
        if(vet[i]%2==0){ //se o numero digitado for par, guarda 0 naquela posição em um outro vetor, mapeando os pares
            mapa[i]=0;
        } else{
            mapa[i]=1; //fazendo essa dupla verificação para garantir que o lixo naquela posicao não vai ser 0
        }
    }
    printf("\n\n");
    for(i=0; i<6; i++){
        if(!mapa[i]){ //Se eu mapeei um par, então isso
            printf("%d eh par\n", vet[i]);
            sum+=vet[i];
            j++;
        }
    }
    if(j!=0){ //Só imprime a soma se achar pelo menos 1 par
        printf("A soma desses pares eh %d\n\n\n", sum);
    }
    j=0;
    for(i=0; i<6; i++){ //Para manter a ordem do enunciado, não é feito a impressao dos ímpares logo no else do if anterior
        if(mapa[i]){ //Se eu mapeei um impar, então isso
            printf("%d eh impar\n", vet[i]);
            j++;
        }
    }
    printf("Foram inseridos %d impares", j);
    return 0;
}