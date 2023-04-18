#include<stdio.h>

float power(int x, int z){ //precisa ser float para os casos onde z<0
    float res=1;
    if(z<0){
        for(; z<0; z++){ //Para numeros menores que 0, divide por x sucessivamente
            res/=x;
        }
    } else{
        for(; z>0; z--){ //Note que para z=0, não roda o for, e o resultado sai como 1
            res*=x;
        }
    }
    return res;
}

int main(){
    int a, b;
    printf("Insira o valor da base: ");
    scanf("%d", &a);
    printf("Insira o valor do expoente: ");
    scanf("%d", &b);
    printf("O resultado de %d^%d eh %.2f", a, b, power(a,b));
    return 0;
}