#include<stdio.h>
#include<math.h>
int main(){
    float v;
    do{
        printf("Insira um valor para ser operado(insira um valor negativo ou zero para parar): ");
        scanf("%f", &v);
        if(v>0){
            printf("O quadrado desse numero eh %.2f\n", v*v);
            printf("O cubo desse numero eh %.2f\n", v*v*v);
            printf("A raiz desse numero eh %.2f\n\n", sqrt(v));
        }
    } while(v>0);
    return 0;
}