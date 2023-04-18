#include<stdio.h>
#include<math.h>

int quad(int a){
    float b;
    b=sqrt(a);
    if((int)b!=b || a<0){
        printf("%d nao eh quadrado perfeito", a);
    } else{
        printf("%d eh quadrado perfeito", a);
    }
}
int main(){
    int x;
    printf("Insira o numero desejado: ");
    scanf("%d", &x);
    quad(x);
    return 0;
}