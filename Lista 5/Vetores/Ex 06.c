#include<stdio.h>
#include<math.h>

int primo(int a){
    int i;
    float r;
    if(((a%2==0)&&(a!=2))||a==1||a==0){
        return 0;
    } else{
        r=sqrt(a);
        for(i=3; i<=r; i+=2){
            if(a%i==0){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int vet[10], i;
    printf("Insira os valores do vetor:\n");
    for(i=0; i<10; i++){
        scanf("%d", &vet[i]);
    }
    for(i=0; i<10; i++){//percorre o vetor do começo ao fim, testa cada um
        if(primo(vet[i])){
            printf("%d(na posicao %d) eh primo\n", vet[i], i);
        }
    }
    return 0;
}

