#include<stdio.h>
#include<math.h>

int main(){
    int x, i, p=1;
    float r;
    double s=0;
    for(x=0; x<=2000000; x++){
        p=1;
        r=sqrt(x); //Só precisa checar até a raiz, máximo par de divisor é da forma n²
        if((x%2==0 && x!=2) || x==1){ //Arruma o fato de que ele não checa se é divisível por 2 e atribui 1 como não primo
            p=0;
        }else{
            for(i=3; i<=r; i+=2){ //Incrementa de 2 em 2
                if(x%i==0){
                    p=0;
                    break;
                }
            }
        }
            if(p){
            s+=x;
        }
    }
    printf("%.lf\n", s);
    return 0;
}
